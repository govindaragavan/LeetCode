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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==nullptr || head->next==nullptr)
        return nullptr;
        ListNode* temp=head;
        int l=0;
        while(temp){
       temp=temp->next;
        l++;
        }
        if(n==l){
           head=head->next;
            return head;
        }
ListNode* curr=head->next;
ListNode* prev=head;
for(int i=0;i<l-n-1 && curr->next;i++){
    curr=curr->next;
    prev=prev->next;
}
    cout<<curr->val<<" "<<prev->val;
prev->next=curr->next;
        return head;
    }
};