
class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> ans;
        queue<TreeNode*> q;

        q.push(root);

        while (!q.empty()) {
            int levelSize = q.size();
            double sum = 0;
            int cnt = 0;

            for (int i = 0; i < levelSize; i++) {
                TreeNode* node = q.front();
                q.pop();

                sum += node->val;
                cnt++;

                if (node->left != nullptr) {
                    q.push(node->left);
                }

                if (node->right != nullptr) {
                    q.push(node->right);
                }
            }

            double avg = sum / cnt;
            ans.push_back(avg);
        }

        return ans;
    }
};
