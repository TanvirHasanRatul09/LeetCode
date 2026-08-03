class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        if(nums.empty()) return 0;

        set<int> s;

        for(int x : nums){
            s.insert(x);
        }

        int cnt = 1;
        int ans = 1;

        auto it = s.begin();
        int prev = *it;
        ++it;

        for(; it != s.end(); it++){

            if(*it - prev == 1){
                cnt++;
            }
            else{
                cnt = 1;
            }

            ans = max(ans, cnt);
            prev = *it;
        }

        return ans;
    }
};