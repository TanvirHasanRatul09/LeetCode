class Solution(object):
    def removeDuplicates(self, nums):
        a=0
        for i in range(1,len(nums)):
            if nums[a]!=nums[i]:
                a+=1
                nums[a]=nums[i]
        return a+1


        