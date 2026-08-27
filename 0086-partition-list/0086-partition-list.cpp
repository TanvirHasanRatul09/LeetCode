class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode *sh=new ListNode(0);
        ListNode *st=sh;
        ListNode *lh=new ListNode(0);
        ListNode *lt=lh;
        ListNode *curr=head;
        while(curr!=nullptr){
            if(curr->val<x){
                st->next=curr;
                st=st->next;
            }else{
                lt->next=curr;
                lt=lt->next;
            }
            curr=curr->next;
        }
        lt->next=nullptr;
        st->next=lh->next;
        return sh->next;
    }
};