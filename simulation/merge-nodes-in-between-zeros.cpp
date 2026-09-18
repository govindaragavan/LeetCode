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
    ListNode* mergeNodes(ListNode* head) {
        stack<int> st;
        st.push(0);
        vector<int> ans;
        ListNode* res=new ListNode(0);
        ListNode* dummy=res;
        ListNode* temp=head;
        int curr=0;
        while(temp){
            if(temp->val==0){
                ListNode* dum=new ListNode(curr);
                res->next=dum;
                res=dum;
                 curr=0;
            }
            else curr+=temp->val;
            temp=temp->next;
        }
        if(curr>0) ans.push_back(curr);
        return dummy->next->next;
    }
};