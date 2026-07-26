class Solution(object):
    def canConstruct(self, ransomNote, magazine):
        r={}
        m={}
        for c in(ransomNote):
            r[c]=r.get(c,0)+1
        
        for c in(magazine):
            m[c]=m.get(c,0)+1
        
        for key,value in r.items():
            if m.get(key,0)<value:
                return False
        return True