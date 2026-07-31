class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
           unordered_map<string,vector<string>>mp;
           for(auto x:strs){
            string w=x;
            sort(w.begin(),w.end());
            mp[w].push_back(x);
           }
           vector<vector<string>>a;
           for(auto x:mp){
            a.push_back(x.second);
           }
           return a;
    }
};