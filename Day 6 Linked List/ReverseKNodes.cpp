
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
    int countNode(ListNode*head){
        ListNode * p = head;
        int nodes = 0;
        while(p!=nullptr){
            nodes++;
            p = p->next;
        }
        return nodes;
    }
    
    ListNode * reverse(ListNode* head,int k,int t){
        if(head==nullptr)return nullptr;
        
        ListNode * prev = nullptr;
        ListNode * current = head;
        ListNode * temp;
        int count = 1;
        if(t==0)return head;
        while(current!=nullptr && count<=k){
            temp = current->next;
            current->next = prev;
            prev = current;
            current = temp;
            count++;
        }
        if(temp!=nullptr){
            t--;
            head->next = reverse(temp,k,t);
        }
        return prev;
    }
    
    ListNode* reverseKGroup(ListNode* head, int k) {
        int count = countNode(head);
        int times = count/k;
        ListNode * p = reverse(head,k,times);
        return p;
    }
};