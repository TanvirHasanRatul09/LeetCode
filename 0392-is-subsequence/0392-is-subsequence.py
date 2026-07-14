class Solution(object):
    def isSubsequence(self, s, t):
        sp=0
        tp=0
        n=len(s)
        m=len(t)
        while(sp<n and tp<m):
            if(s[sp]==t[tp]):
                sp+=1
            tp+=1
        if(sp==n):
            return True
        else:
            return False