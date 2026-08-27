/*
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
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        
        Node*temp=head;
        while(temp!=NULL){
        Node*copynode= new Node(temp->val);
        copynode->next=temp->next;
        temp->next=copynode;
        temp=temp->next->next;
        }
         
      //connect random pointers
      temp=head;
      while (temp!=NULL){
        Node *copynode= temp->next;
        if(temp->random!=NULL){
        copynode->random=temp->random->next;// not temp->random 
        }
        else {
            temp->random=NULL;
        }
        temp=temp->next->next;
      }
          // extract copynodes and connect to pointers

        Node*dummynode= new Node(-1);
      temp=head;
      Node*res= dummynode;
      while(temp!=NULL){
       res->next=temp->next;
      temp->next=temp->next->next;

      res=res->next;
      temp=temp->next;
 }
return dummynode->next;
 }

};