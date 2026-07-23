class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int a=matrix.size();
        int c=matrix[0].size();
        int top=0,bot=a-1,l=0,r=c-1;
        vector<int>ans;

        while (l<=r && top<=bot) {

            for (int i=l;i<=r;i++) {
                ans.push_back(matrix[top][i]);
            }
            top++;

            for (int i=top;i<=bot;i++) {
                ans.push_back(matrix[i][r]);
            }
            r--;

            if (top<=bot) {
                for (int i=r;i>=l;i--) {
                    ans.push_back(matrix[bot][i]);
                }
                bot--;
            }

            if (l<=r) {
                for (int i=bot;i>=top;i--) {
                    ans.push_back(matrix[i][l]);
                }
                l++;
            }
        }

        return ans;
    }
};