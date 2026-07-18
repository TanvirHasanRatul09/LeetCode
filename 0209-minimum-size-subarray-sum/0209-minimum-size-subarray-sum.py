class Solution(object):
    def minSubArrayLen(self, target, nums):
        n=len(nums)
        length=n+1
        j=0
        sum=0
        for i in range(n):
            sum+=nums[i]
            while(sum>=target):
                length=min(length,i-j+1)
                sum-=nums[j]
                j+=1
        if(length!=n+1):
            return length
        else:
            return 0