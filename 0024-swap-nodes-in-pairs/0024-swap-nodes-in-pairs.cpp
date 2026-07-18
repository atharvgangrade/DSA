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
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL || head->next== NULL)
        {
            return head;
        }
        ListNode *temp=head;
        ListNode *temp2=head->next;
        while(temp != NULL && temp2 != NULL)
        {
            swap(temp->val , temp2->val);
            temp=temp2->next;
            if(temp!= NULL)
            {
                temp2=temp->next;
            }
        }
        return head;
    }
};