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
    ListNode* oddEvenList(ListNode* head) {
        vector<int> ans;
        ListNode* temp=head;
        while(temp!= NULL)
        {
            ans.push_back(temp->val);
            temp=temp->next;
        }
        ListNode* dummy =new ListNode(-1);
        ListNode* tail=dummy;
        int i=0;
        while(i<ans.size())
        {
            ListNode* newNode1=new ListNode(ans[i]);
            tail->next=newNode1;
            tail=newNode1;
            i+=2;
        }
        int j=1;
        while(j<ans.size())
        {
            ListNode* newNode2= new ListNode(ans[j]);
            tail->next=newNode2;
            tail=newNode2;
            j+=2;
        }
        return dummy->next;
    }
};