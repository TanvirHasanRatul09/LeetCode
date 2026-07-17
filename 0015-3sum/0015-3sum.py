class Solution(object):
    def threeSum(self, nums):
        n=len(nums)
        v=[]
        nums.sort()
        for i in range(n-2):
            if(i>0 and nums[i]==nums[i-1]):
                continue
            l=i+1
            r=n-1
            while(l<r):
                ans=nums[i]+nums[l]+nums[r]
                if(ans==0):
                    v.append([nums[i],nums[l],nums[r]])
                    l+=1
                    r-=1
                    while(l<r and nums[l]==nums[l-1]):
                        l+=1
                    while(l<r and nums[r]==nums[r+1]):
                        r-=1
                elif(ans<0):
                    l+=1
                else:
                    r-=1
        return v