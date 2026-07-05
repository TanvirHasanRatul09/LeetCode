class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        if (n==1) return 0;
        int cnt = 0;
        int index = 0;
        int max_index = 0;
        for (int i = 0; i < n - 1; i++) {
            max_index=max(max_index,i+nums[i]);
            if (i == index) {
                cnt++;
                index=max_index;
                if (index>=n-1)
                    break;
            }
        }
        return cnt;
    }
};