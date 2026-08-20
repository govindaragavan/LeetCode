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
    ListNode* sortList(ListNode* head) {  
        if (!head) return nullptr; 
        ListNode* temp=head;
        vector<int>a;
        while(temp){
            a.push_back(temp->val);
            temp=temp->next;
        }
sort(a.begin(),a.end());
ListNode *newHead= new ListNode(a[0]);
ListNode * temp1=newHead;
for(int i=1;i<a.size();i++){
ListNode *newNode= new ListNode(a[i]);
temp1->next=newNode;
temp1=newNode;
}
return newHead;
    }
};