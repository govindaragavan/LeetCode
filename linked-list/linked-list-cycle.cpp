/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *temp=head;
unordered_map<ListNode*,bool> map;
  while(temp!=nullptr){
    if(map.find(temp)!=map.end())
        return true;
                map[temp]=true;
        temp=temp->next;
  }
  return false;
    }
};