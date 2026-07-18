class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int i=0,sum=0;
        int length=n+1;
        for(int j=0;j<n;j++){
            sum+=nums[j];
            while(sum>=target){
                length=min(length,j-i+1);
                sum-=nums[i];
                i++;
            }
        }
        if(length!=n+1){
            return length;
        }else{
            return 0;
        }
    }
};