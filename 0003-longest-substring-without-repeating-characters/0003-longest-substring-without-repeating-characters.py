class Solution(object):
    def lengthOfLongestSubstring(self, s):
        st=set()
        n=len(s)
        j=0
        ans=0
        for i in range(n):
            while s[i] in st:
                st.remove(s[j])
                j+=1
            st.add(s[i])
            ans=max(ans,len(st))
        return ans