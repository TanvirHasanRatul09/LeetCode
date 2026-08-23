class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==nullptr)return head;
        ListNode *d=new ListNode(0);
        d->next=head;
        ListNode *first=d;
        ListNode *second=head;
        for(int i=0;i<n;i++){
            second=second->next;
        }
        while(second!=nullptr){
            first=first->next;
            second=second->next;
        }
        first->next=first->next->next;
        return d->next;
    }
};