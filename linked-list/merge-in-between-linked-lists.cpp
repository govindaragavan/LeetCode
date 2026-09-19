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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* temp=list1;
        int cnt=0;
        int c=0;
        ListNode* end=list1;
        while(temp){
            if(c==b) {end=temp->next; break;}
            temp=temp->next;
            c++;
        }
        temp=list1;
        cout<<temp->val;
        while(temp){
        if(cnt==a-1){
            ListNode* tmp=list2;
            while(tmp){
            temp->next=tmp;
            tmp=tmp->next;
            temp=temp->next;
            }
            temp->next=end;
             return list1;
        }
        temp=temp->next;
        cnt++;
        }
        return list1;
    }
};