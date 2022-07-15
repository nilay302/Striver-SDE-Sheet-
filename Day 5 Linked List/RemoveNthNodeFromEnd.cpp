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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(n==0)return head;
        ListNode * p = head;
        int count = 0;
        while(p!=nullptr){
            count++;
            p=p->next;
        }
        ListNode * q = head;
        if(count -n ==0){
            ListNode * q = head;
            head = head->next;
            delete(q);
            return head;
        }
        for(int i = 0;i<count-n-1;i++){
            q = q->next;
        }
        ListNode * temp = q->next;
        q->next = temp->next;
        temp->next = nullptr;
        delete(temp);
        
        return head;
        
    }
};