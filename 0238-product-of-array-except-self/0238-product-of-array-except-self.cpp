class Solution {
public:
    int cnt=0;
    int product(vector<int>&nums){
        int a=1;
        for(int c:nums){
            if(c!=0){
                a*=c;
            }else{
                cnt++;
            }
        }
        return a;
    }
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>v(n);
        int p=product(nums);
        if(cnt==0){
            for(int i=0;i<n;i++){
                v[i]=p/nums[i];
            }
        }else if(cnt==1){
            for(int i=0;i<n;i++){
                if(nums[i]==0){
                    v[i]=p;
                }else{
                    v[i]=0;
                }
            }
        }else{
            return vector<int>(n,0);
        }
        return v;
    }
};