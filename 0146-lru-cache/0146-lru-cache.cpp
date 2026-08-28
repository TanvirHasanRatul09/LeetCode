class LRUCache {
public:
    struct Node {
        int key,value;
        Node *prev,*next;
        Node(int k,int v) {
            key=k;
            value=v;
            prev=next=nullptr;
        }
    };

    int capacity;
    unordered_map<int,Node*> mp;
    Node *head,*tail;

    LRUCache(int capacity) {
        this->capacity=capacity;
        head=new Node(0,0);
        tail=new Node(0,0);
        head->next=tail;
        tail->prev=head;
    }

    void remove(Node *node) {
        node->prev->next=node->next;
        node->next->prev=node->prev;
    }

    void insert(Node *node) {
        node->next=tail;
        node->prev=tail->prev;
        tail->prev->next=node;
        tail->prev=node;
    }

    int get(int key) {
        if(!mp.count(key)) return -1;

        Node *node=mp[key];
        remove(node);
        insert(node);

        return node->value;
    }

    void put(int key,int value) {
        if(mp.count(key)) {
            Node *node=mp[key];
            node->value=value;
            remove(node);
            insert(node);
            return;
        }

        Node *node=new Node(key,value);
        mp[key]=node;
        insert(node);

        if(mp.size()>capacity) {
            Node *lru=head->next;
            remove(lru);
            mp.erase(lru->key);
            delete lru;
        }
    }
};