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
    bool isPalindrome(ListNode* head) {
      ListNode *temp=head;
      vector<int>a; 
      while(temp!=nullptr){
        a.push_back(temp->val);
        temp=temp->next;
      }
      for(int i=0;i<a.size();i++)
{
    cout<<a[i]<<" ";
}    int l=0,r=a.size()-1;

    while(l<r){
        if(a[l]!=a[r])
        return false;
        l++;
        r--;
    }
      return true;
    }
};