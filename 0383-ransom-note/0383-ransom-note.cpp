class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>f;
        for (int c:magazine){
            f[c]++;
        }
        for(int c:ransomNote){
            if(f[c]==0){
                return false;
            }
            f[c]--;
        }
        return true;
    }
};