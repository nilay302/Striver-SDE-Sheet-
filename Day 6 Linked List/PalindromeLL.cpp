#include<bits/stdc++.h>
using namespace std;

// Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
  class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(head->next == NULL || head == NULL)return true;
        ListNode * slow = head;
        ListNode * fast = head->next;
        while(fast!=NULL && fast->next!=NULL){
            fast = fast->next->next;
            slow = slow->next;
        }
        ListNode * p = slow->next;
        ListNode * q = NULL;
         ListNode * r = NULL;
        while(p!=NULL){
            r=q;
           q = p;
            p = p->next;
            q->next = r;
        }
        slow ->next  = q;
        
        slow = slow->next;
        ListNode * n = head;
        while(slow!=NULL){
            if(slow->val != n->val)return false;
            slow = slow->next;
            n = n->next;
        }
        return true;
    }
};