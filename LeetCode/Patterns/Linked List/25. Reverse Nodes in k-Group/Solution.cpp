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

ListNode* findkthnode(ListNode* temp,int k){
    k-=1;
    while(temp!=NULL && k>0){
        k=k-1;
        temp=temp->next;
    }
    return temp;
}

ListNode* reverse(ListNode* head){
   ListNode* prev=NULL;
   ListNode* temp=head;

   while(temp!=NULL){
        ListNode* front= temp->next;
        temp->next=prev;
        prev=temp;
        temp=front;
   }
   return prev;
}

ListNode* reverseKGroup(ListNode* head, int k) {
    ListNode* temp=head;
    ListNode* prevl=NULL;

    while(temp!=NULL){
        ListNode* kthnode = findkthnode(temp, k);

        if(kthnode==NULL){
            if(prevl) prevl->next=temp;
            break;
        }

        ListNode* newnode=kthnode->next;
        kthnode->next=NULL;

        ListNode* newHead = reverse(temp);   // ✅ FIX

        if(temp==head) head=newHead;         // ✅ FIX
        else prevl->next=newHead;            // ✅ FIX

        temp->next = newnode;                // ✅ FIX (MOST IMPORTANT)

        prevl=temp;
        temp=newnode;                        // ✅ FIX
    }
    return head;
}

};
