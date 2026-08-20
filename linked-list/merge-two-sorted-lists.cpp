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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(!list1) return list2;
        if(!list2) return list1;
        vector<int> a;
        vector<int> b;

        ListNode*temp=list1;
        while(temp){
            a.push_back(temp->val);
            temp=temp->next;
        }
        temp=list2;
                while(temp){
            b.push_back(temp->val);
            temp=temp->next;
        }
        for(int i=0;i<b.size();i++){
            a.push_back(b[i]);
        }
        sort(a.begin(),a.end());
        ListNode *head1=new ListNode(a[0]);
        ListNode* temp1=head1;
        for(int i=1;i<a.size();i++){
        ListNode *newNode =new ListNode(a[i]);
        temp1->next=newNode;
        temp1=newNode;
        }
        return head1;
    }
};