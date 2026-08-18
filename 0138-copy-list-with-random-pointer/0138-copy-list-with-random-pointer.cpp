class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head==NULL)return NULL;
        unordered_map<Node*,Node*>m;
        Node *newhead=new Node(head->val);
        m[head]=newhead;
        Node *oldtemp=head->next;
        Node *newtemp=newhead;
        while(oldtemp!=NULL){
            Node *cpy=new Node(oldtemp->val);
            m[oldtemp]=cpy;
            newtemp->next=cpy;
            oldtemp=oldtemp->next;
            newtemp=newtemp->next;
        }
        oldtemp=head;
        newtemp=newhead;
        while(oldtemp!=NULL){
            newtemp->random=m[oldtemp->random];
            oldtemp=oldtemp->next;
            newtemp=newtemp->next;
        }
        return newhead;
    }
};