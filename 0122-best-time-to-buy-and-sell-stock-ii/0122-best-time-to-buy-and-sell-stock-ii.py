class Solution(object):
    def maxProfit(self, prices):
        n=len(prices)
        p=0
        for i in range(1,n):
            if(prices[i]>prices[i-1]):
                p+=prices[i]-prices[i-1]
        return p
        