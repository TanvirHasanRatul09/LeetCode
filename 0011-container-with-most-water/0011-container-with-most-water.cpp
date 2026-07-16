class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int l=0,r=n-1;
        int maximum=0,ans=0;
        while(l<r){
            ans=(r-l)*min(height[l],height[r]);
            maximum=max(maximum,ans);
            if(height[l]<height[r]){
                l++;
            }else{
                r--;
            }
        }
        return maximum;
    }
};