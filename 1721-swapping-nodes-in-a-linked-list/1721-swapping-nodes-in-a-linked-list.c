/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* swapNodes(struct ListNode* head, int k){
struct ListNode *p,*fast,*slow;
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