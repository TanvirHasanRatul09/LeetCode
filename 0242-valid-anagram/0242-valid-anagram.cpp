class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>s1;
        unordered_map<char,int>t1;
        if(s.size()!=t.size())return false;
        for(char c:s){
            s1[c]++;
        }
        for(char c:t){
            t1[c]++;
        }
        for(auto it:s1){
            if(t1[it.first]!=it.second){
                return false;
            }
        }
        return true;
    }
};