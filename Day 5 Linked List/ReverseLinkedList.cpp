
 //Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode * n = head;
        ListNode * p = nullptr;
        ListNode * q = nullptr;
        while(n!=nullptr){
            q = p;
            p = n;
            n = n->next;
            p -> next = q;
        }
        head = p;
        return head;
    }
};