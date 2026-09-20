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
    ListNode* removeNodes(ListNode* head) {
       ListNode* dummy=new ListNode(head->val);
       dummy->next=head;
        ListNode* temp =head;
       ListNode* prev=dummy;
ListNode* prev1=dummy;
      while(temp){
        if(temp->val>prev1->val){
           prev->next=temp;
           prev=temp;
        }
        temp=temp->next;
        prev1=prev1->next;
      }
      return dummy->next;
    }
};