class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int s = 0, c = 0;

        ListNode* dummy = new ListNode(0);
        ListNode* curr = dummy;

        while(l1 != nullptr || l2 != nullptr) {

            int a = (l1 != nullptr) ? l1->val : 0;
            int b = (l2 != nullptr) ? l2->val : 0;

            s = a + b + c;
            c = s / 10;

            curr->next = new ListNode(s % 10);
            curr = curr->next;

            if(l1 != nullptr)
                l1 = l1->next;

            if(l2 != nullptr)
                l2 = l2->next;
        }

        if(c != 0)
            curr->next = new ListNode(c);

        return dummy->next;
    }
};