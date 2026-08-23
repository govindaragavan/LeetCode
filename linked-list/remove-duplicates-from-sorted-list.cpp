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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode * temp=head;
      map<int,int> mp;     
      while(temp){
            mp[temp->val]++;
            temp=temp->next;
        }
                auto it=mp.begin();
        ListNode * res = new ListNode(it->first);
        temp=res;
        it++;
        while(it!=mp.end()){
            ListNode* ll = new ListNode(it->first);
            temp->next=ll;
            temp=temp->next;
          it++;}
    return res;
    }
};