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
    bool hasCycle(ListNode *head) {
        if(head == nullptr)return false;
       ListNode * p = head;
        ListNode * q = head;
        p=p->next;
        q = q->next;
        if(q==nullptr)return false;
        q = q->next;
        while(p!=q){
            if(p==nullptr)return false;
            if(q==nullptr)return false;
            p = p->next;
            q = q->next;
        if(q==nullptr)return false;
        q = q->next;
        }
        return true;
    }
};