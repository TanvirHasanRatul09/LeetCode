class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char>m;
        unordered_map<char,char>m1;
        for(int i=0;i<s.size();i++){
            char c1=s[i];
            char c2=t[i];
            if(m.count(c1) && m[c1]!=c2){
                return false;
            }
            if(m1.count(c2) && m1[c2]!=c1){
                return false;
            }
            m[c1]=c2;
            m1[c2]=c1;
        }
        return true;

    }
};