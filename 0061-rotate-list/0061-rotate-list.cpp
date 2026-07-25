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
    ListNode* rotateRight(ListNode* head, int k) {
        int len=1;
        ListNode* temp=head;
        if(head==NULL || head->next==NULL ||k==0)
        {
            return head;
        }
        while(temp->next!= NULL)
        {
            temp=temp->next;
            len++;
        }
        k=k%len;
        temp->next=head;
        ListNode* newtail=head;
        for(int i=0;i<len-k-1;i++)
        {
            newtail=newtail->next;
        }
        ListNode* newhead=newtail->next;
        newtail->next=NULL;
        return newhead;    
    }
};