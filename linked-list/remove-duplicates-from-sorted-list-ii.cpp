class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (!head) return nullptr;

        ListNode* dummy = new ListNode(0, head);
        ListNode* prev = dummy;

        while (head) {
            if (head->next && head->val == head->next->val) {
                int dupVal = head->val;
                while (head && head->val == dupVal) {
                    ListNode* toDelete = head;
                    head = head->next;
                    delete toDelete;
                }
                prev->next = head; 
            } else {
                prev = head;
                head = head->next;
            }
        }

        return dummy->next;
    }
};
