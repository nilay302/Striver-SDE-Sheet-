
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
    ListNode* middleNode(ListNode* head) {
        ListNode *n = head;
        int count = 0;
        while(n!=nullptr){
            count++;
            n=n->next;
        }
        int index = count/2;
         ListNode *p = head;
        for(int i = 0;i<index;i++){
            p = p->next;
        }
        head = p;
        return head;
    }
};