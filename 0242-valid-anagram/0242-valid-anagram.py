class Solution(object):
    def isAnagram(self, s, t):
        if(len(s)!=len(t)):
            return False
        s1=[0]*128
        t1=[0]*128
        for i in range(len(s)):
            s1[ord(s[i])]+=1
            t1[ord(t[i])]+=1
        return s1==t1