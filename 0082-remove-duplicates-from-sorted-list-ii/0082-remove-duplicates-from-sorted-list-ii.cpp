class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {

        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* curr = dummy;
        ListNode* node = head;

        while (node != nullptr) {
            if(node->next!=nullptr && node->val == node->next->val){
                while(node->next!=nullptr && node->val==node->next->val){
                    node=node->next;
                }
                curr->next=node->next;
            }else{
                curr=curr->next;
            }
            node=node->next;
        }
        return dummy->next;
    }
};