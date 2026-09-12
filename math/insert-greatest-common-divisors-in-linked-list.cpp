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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* temp= head;
        ListNode* Next=head->next;
        ListNode* prev=head;
        while(Next){
            int gcd=__gcd(temp->val,Next->val);
            ListNode* dummy= new ListNode(gcd);
            temp->next=dummy;
            dummy->next=Next;
            temp=Next;
            Next=Next->next;
        }
        return head;
    }
};