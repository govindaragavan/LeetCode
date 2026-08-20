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
    ListNode* oddEvenList(ListNode* head) {
        if (head == nullptr || head->next == nullptr)
            return head;
        ListNode* oe=head;
        ListNode* ee=head->next;
        ListNode* ee1=head->next;
        int count=3;
        ListNode* temp=head->next->next;
        while(temp!=nullptr){
      if(count%2!=0){
      oe->next=temp;
      oe=temp;}
      else{
        ee->next=temp;
        ee=temp;
      }
      temp=temp->next;
      count++;
        }
        ee->next=nullptr;
        oe->next=ee1;
        return head;    }
};