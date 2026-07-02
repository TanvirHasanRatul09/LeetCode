class Solution {
public:
    int majorityElement(vector<int>& nums) {
       sort(nums.begin(),nums.end());
       int curr_max=nums[0],cnt=1,a=1;
       for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                cnt++;
            }else{
                cnt=1;
            }
            if(cnt>a){
                a=cnt;
                curr_max=nums[i];
            }
        }
        return curr_max;
    }
};