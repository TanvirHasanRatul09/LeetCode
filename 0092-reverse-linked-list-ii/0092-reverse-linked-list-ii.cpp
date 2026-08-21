class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head==nullptr ||  left==right)return head;
        ListNode *d=new ListNode(0);
        d->next=head;
        ListNode* prev =d;
        ListNode* curr = head;

        for (int i = 1; i < left; i++){
            prev = curr;
            curr = curr->next;
        }

        for(int i=0;i<right-left;i++){
            ListNode *temp=curr->next;
            curr->next=temp->next;
            temp->next=prev->next;
            prev->next=temp;
        }
        return d->next;
    }
};