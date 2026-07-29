class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,string>m1;
        unordered_map<string,char>m2;
        vector<string>words;
        string word;
        stringstream ss(s);
        while(ss>>word){
            words.push_back(word);
        }
        if(pattern.size()!=words.size())return false;
        for(int i=0;i<pattern.size();i++){
            char c=pattern[i];
            word=words[i];
            if(m1.count(c) && m1[c]!=word){
                return false;
            }
            if(m2.count(word) && m2[word]!=c){
                return false;
            }
            m1[c]=word;
            m2[word]=c;
        }
        return true;
    }
};