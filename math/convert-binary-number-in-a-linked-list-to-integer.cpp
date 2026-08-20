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
    int getDecimalValue(ListNode* head) {
        ListNode*temp=head;
        string bin="";
        while(temp!=nullptr){
            bin+=to_string(temp->val);
            temp=temp->next;
        }
        cout<<bin;
    int decimal=stoi(bin,nullptr,2);
     return decimal;
    }
};