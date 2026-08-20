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
    void reorderList(ListNode* head) {
        stack<ListNode*> st;
        ListNode* temp = head;
        while(temp){
          st.push(temp);
          temp=temp->next;
        }
        temp=head;
        int n=st.size();
      for(int i=0;i<n/2;i++){
           st.top()->next=temp->next;
           temp->next=st.top();
           temp=temp->next->next;
           st.pop();
        }
        if(temp) temp->next=nullptr;
    }
};