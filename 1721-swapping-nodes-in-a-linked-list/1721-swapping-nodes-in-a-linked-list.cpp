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
    ListNode* swapNodes(ListNode* head, int k) {
 ListNode *p,*fast,*slow;
    p=fast=slow=head;
    int i,temp;
    for(i=1;i<k;i++)
    {
        p=p->next;
        
    }
    fast=p->next;
    while(fast)
    {
        fast=fast->next;
        slow=slow->next;
    }
    temp=p->val;
    p->val=slow->val;
    slow->val=temp;
    
    return head;
 }
};