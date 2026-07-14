class Solution {
public:
    bool isSubsequence(string s, string t) {
        int sp=0;
        int tp=0;
        int n=s.length();
        int m=t.length();
        while(tp<m && sp<n){
            if(s[sp]==t[tp]){
                sp++;
            }
            tp++;
        }
        if(sp==n){
            return true;
        }else{
            return false;
        }
    }
};