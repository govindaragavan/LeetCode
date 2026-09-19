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
    int pairSum(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* prev = NULL;
        ListNode* cur = slow;

        while(cur!= NULL)
        {
            ListNode* next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;  
        }

        ListNode* newcur = head;
        ListNode* backcur = prev;
        int cursum = 0;
        int maxsum = 0;

        while(newcur != slow)
        {
            cursum = newcur->val + backcur->val;
            maxsum = max(maxsum, cursum);
            newcur=newcur->next;
            backcur=backcur->next;
        }

        return maxsum;
    }
};