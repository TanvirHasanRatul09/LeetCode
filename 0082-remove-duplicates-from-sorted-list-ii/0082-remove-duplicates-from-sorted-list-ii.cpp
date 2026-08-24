class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {

        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* curr = dummy;
        ListNode* node = head;

        while (node != nullptr) {

            // Check if node is the beginning of a duplicate group
            if (node->next != nullptr && node->val == node->next->val) {

                // Move node to the last duplicate
                while (node->next != nullptr &&
                       node->val == node->next->val) {
                    node = node->next;
                }

                // Skip the entire duplicate group
                curr->next = node->next;

            } else {

                // node is unique, so keep it
                curr = curr->next;
            }

            // Move to the next node
            node = node->next;
        }

        return dummy->next;
    }
};