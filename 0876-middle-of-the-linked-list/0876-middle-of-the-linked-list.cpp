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
    int getLength(ListNode* head)
    {
        int length=0;
        while(head!=NULL)
        {
            length++;
            head=head->next;
        }
        return length;
    }
    ListNode* middleNode(ListNode* head) {
        int len=getLength(head);
        int ans=(len/2)+1;
        int temp=0;
        while(temp<ans-1)
        {
            head=head->next;
            temp++;
        }
        return head;
    }
};