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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode * n ;
         ListNode * head ;
        if(list1==nullptr)return list2;
        if(list2==nullptr)return list1;
        if(list1->val > list2->val){
            n = list2;
            head = list2;
            list2 = list2->next;
             n->next = nullptr;
        }
        else{
            n = list1;
            head = list1;
            list1 = list1->next;
            n->next = nullptr;
        }
        
        while(list1!=nullptr && list2!=nullptr){
            if((list1->val) > (list2->val)){
                n->next = list2;
                n = list2;
                list2 = list2->next;
                n->next = nullptr;
            }
            else{
                n->next = list1;
                n = list1;
                list1 = list1->next;
                n->next = nullptr;
            }
        }
        if(list1!=nullptr){
            n->next = list1;
        }
        else{
            n->next = list2;
        }
        return head;
    }
};