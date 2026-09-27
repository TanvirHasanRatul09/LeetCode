class Solution:
    def dfs(self, root, sum, nums):
        if not root:
            return

        digit = root.val
        sum = sum * 10 + digit

        if not root.left and not root.right:
            nums.append(sum)

        self.dfs(root.left, sum, nums)
        self.dfs(root.right, sum, nums)

    def sumNumbers(self, root):
        nums = []
        sum = 0

        self.dfs(root, sum, nums)

        total = 0
        for n in nums:
            total += n

        return total