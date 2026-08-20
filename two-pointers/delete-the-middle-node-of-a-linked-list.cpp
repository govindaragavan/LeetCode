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
    ListNode* deleteMiddle(ListNode* head) {
        if(!head || !head->next)
        return nullptr;
        ListNode *dummy=new ListNode(0);
        dummy->next=head;
        ListNode* slow=head;
        ListNode* fast=head;
 while(fast && fast->next){
    dummy=dummy->next;
    slow=slow->next;
    fast=fast->next->next;
 }
 cout<<dummy->val;
 dummy->next=slow->next;
 return head;
    }
};