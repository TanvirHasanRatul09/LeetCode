class Solution {
public:
    Node* connect(Node* root) 
    {
        if (!root)
            return root;

        queue<Node*> q;
        q.push(root);

        while (!q.empty())
        {
            int level = q.size();

            Node* prev = NULL;

            for (int i = 0; i < level; i++)
            {
                Node* curr = q.front();
                q.pop();

                // Connect previous node to current node
                if (prev != NULL)
                    prev->next = curr;

                prev = curr;

                // Add children
                if (curr->left)
                    q.push(curr->left);

                if (curr->right)
                    q.push(curr->right);
            }

            // Last node of this level points to NULL
            prev->next = NULL;
        }

        return root;
    }
};