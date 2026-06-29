class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size();
        int j=0,k=0,cnt=0;
        for(int i=0;i<n;i++){
            if(nums[j]==val){
               j++;
            }else{
                nums[k]=nums[j];
                k++;
                cnt++;
                j++;
            }
        }
        return cnt;
    }
};