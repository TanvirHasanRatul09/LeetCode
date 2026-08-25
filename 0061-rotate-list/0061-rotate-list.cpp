class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==nullptr || head->next==nullptr || k==0)return head;
        ListNode *c=head;
        int n=0;
        while(c!=nullptr){
            n++;
            c=c->next;
        }
        k=k%n;
        for(int i=0;i<k;i++){
            ListNode *curr=head;
            while(curr->next->next!=nullptr)
            {
                curr=curr->next;
            }
            ListNode *temp=curr->next;
            curr->next=nullptr;
            temp->next=head;
            head=temp;
        }
        return head;
    }
};