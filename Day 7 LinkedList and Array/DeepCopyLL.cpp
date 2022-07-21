#include<bits/stdc++.h>
using namespace std;
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};


class Solution {
public:
    Node* copyRandomList(Node* head) {
       Node*p = head;
        while(p!=NULL){
            Node * temp = new Node (p->val);
            // temp->val = p->val;
            temp->next = p->next;
            p->next = temp;
            p = temp->next;
        }
        p = head;
       
        while(p!=NULL){
            if(p->random!=NULL)
            p->next->random = p->random->next;
            p = p->next->next;
        }
        
        p = head;
        Node * q = head;
        Node * dummy_head = new Node(0);
        Node * dummy = dummy_head;
        
        while(p!=NULL){
            q = q->next->next;
            dummy->next = p->next;
             p->next = q;
            p = p->next;
            dummy = dummy->next;
            
            
        }
      
        return dummy_head->next;
    }
};