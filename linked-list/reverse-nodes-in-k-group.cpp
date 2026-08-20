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
    void swap(ListNode* a, ListNode* b) {
        struct ListNode *temp = a;
        a = b;
        b = temp;
    }

    ListNode* reverse(ListNode* head) {
        struct ListNode *curr = head, *prev = NULL;
        while (curr != NULL) {
            struct ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        struct ListNode *ptr1 = head, *ptr2 = head;
        int i = 1;
        while (ptr2 != NULL && i < k) {
            ptr2 = ptr2->next;
            i++;
        }
        if (ptr2 == NULL) return head;
        struct ListNode *newhead = ptr2;
        struct ListNode *next = ptr2->next;
        ptr2->next = NULL;
        reverse(ptr1);
        struct ListNode *prev = ptr1;
        while (next != NULL) {
            ptr1 = next;
            ptr2 = ptr1;
            int j = 1;
            while (ptr2 != NULL && j < k) {
                ptr2 = ptr2->next;
                j++;
            }
            if (ptr2 == NULL) break;
            next = ptr2->next;
            ptr2->next = NULL;
            prev->next = reverse(ptr1);
            prev = ptr1;
        }
        prev->next = next;
        return newhead;
    }
};