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
        vector<int> ans;
        ListNode* res=new ListNode(0);
        ListNode* dummy=res;
        ListNode* temp=head;
        int curr=0;
        while(temp){
            if(temp->val==0){
                if(st.empty()) st.push(temp->val);
                else{
                 ans.push_back(curr);
                 curr=0;
                 }
            }
            else curr+=temp->val;
            temp=temp->next;
        }
        if(curr>0) ans.push_back(curr);
     for(int i=1;i<ans.size();i++) {
        ListNode* Next=new ListNode(ans[i]);
        res->val=ans[i-1];
        res->next=Next;
        res=res->next;
     };
        return dummy;
    }
};