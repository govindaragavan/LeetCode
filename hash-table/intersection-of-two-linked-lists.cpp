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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *temp1=headA;
        ListNode *temp2=headB;
        
        unordered_map<ListNode*,bool>map;
        while(temp1!=nullptr){
          map[temp1]=true;
          temp1=temp1->next;
        }
        while(temp2!=nullptr){
            if(map.find(temp2)!=map.end())
            return temp2;
            temp2=temp2->next;
        }
        return temp2;
    }
};