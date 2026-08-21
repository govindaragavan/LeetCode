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
    vector<int> nextLargerNodes(ListNode* head) {
        ListNode * temp= head;
        vector<int> list;
        while(temp){
        list.push_back(temp->val) ;
        temp=temp->next;
        }
        stack<int> st;
        int n=list.size();
        vector<int> nge(n);

        for(int i=n-1;i>=0;i--){
            while(!st.empty() && st.top()<=list[i])
            st.pop();
            
            nge[i]= st.empty() ? 0 : st.top();

            st.push(list[i]);
        }
        return nge;
    }
};