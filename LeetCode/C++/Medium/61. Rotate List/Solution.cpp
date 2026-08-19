/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
 ListNode*findlastnode(ListNode*temp,int k){
   int cnt=1;
    while (temp!=   NULL){
        if(cnt==k)return temp;
        cnt++;
        temp=temp->next;
    }
    return temp;
}
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL||k==0) return head;
int length=1;
ListNode*temp=head;
while(temp->next!=NULL)  {
    temp=temp->next;
    length++;
}
if(k%length==0) return head;
k=k%length;
// attach tail to head
temp->next=head;
ListNode*lastnode=findlastnode(head,length-k);
head=lastnode->next;
lastnode->next=NULL;

return head;
    }
};