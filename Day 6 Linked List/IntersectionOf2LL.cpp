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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode * p = headA;
        ListNode * q = headB;
        int c1 = 0,c2 = 0;
        while(p!=nullptr){
            c1++;
            p = p->next;
        }
         while(q!=nullptr){
            c2++;
            q = q->next;
        }
        p = headA;
        q = headB;
        if(c1>c2){
            while(c1!=c2){
                p = p->next;
                c1--;
            }
        }
        if(c1<c2){
            while(c1!=c2){
                q = q->next;
                c2--;
            }
        }
        while(p!=q ){
            if(p==nullptr || q==nullptr)return nullptr;
            p=p->next;
            q = q->next;
        }
        return p;
    }
};