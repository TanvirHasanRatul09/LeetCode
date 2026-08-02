class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int v=nums[i];
            if(mp.count(nums[i])){
                if((i-mp[v])<=k){
                    return true;
                }
            }
            mp[nums[i]]=i;
        }
        return false;
    }
};