class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int n=nums.size();
        vector<string>result;
        if(nums.empty())return result;
        int s=nums[0];
        for(int i=1;i<=n;i++){
            if(i==n || nums[i]!=nums[i-1]+1){
                if(s==nums[i-1]){
                    result.push_back(to_string(s));
                }else{
                    result.push_back(to_string(s)+"->"+to_string(nums[i-1]));
                }
                if(i<n)s=nums[i];
            }
        }
        return result;
    }
};