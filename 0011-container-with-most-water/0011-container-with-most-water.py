class Solution(object):
    def maxArea(self, height):
        n=len(height)
        l=0
        r=n-1
        maximum=0
        ans=0
        while(l<r):
            ans=(r-l)*min(height[l],height[r])
            maximum=max(maximum,ans)
            if(height[l]<height[r]):
                l+=1
            else:
                r-=1
        return maximum