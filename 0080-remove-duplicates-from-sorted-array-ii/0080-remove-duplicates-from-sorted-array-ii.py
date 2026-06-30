class Solution(object):
    def removeDuplicates(self, nums):
        a=0
        cnt=1
        n=len(nums)
        for i in range(1,n):
            if (nums[a]==nums[i] and cnt<2):
                a+=1
                nums[a]=nums[i]
                cnt+=1
            
            elif(nums[a]!=nums[i] and cnt<=2):
                cnt=0
                a+=1
                nums[a]=nums[i]
                cnt+=1

        return a+1
        