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
    int countNode( ListNode* p){
        int cnt = 0;
        while(p!=NULL){
            cnt++;
            p=p->next;
        }
        return cnt;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        int count = countNode(head);
        if(count == 0|| count == 1)return head;
        //Make it circular
        ListNode * p = head;
        while(p->next!=NULL){
            p=p->next;
        }
        p->next = head;
         ListNode * q = head;
        int br = (count - (k%count));
        for(int i = 0;i<br-1;i++){
            q=q->next;
        }
        ListNode *temp = q->next;
        q->next = NULL;
        return temp;
    }
};