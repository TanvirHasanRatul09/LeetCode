class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {

        unordered_map<char, int> r;
        unordered_map<char, int> m;

        for (char c : ransomNote) {
            r[c]++;
        }

        for (char c : magazine) {
            m[c]++;
        }


        for (auto it : r) {
            if (m[it.first] < it.second) {
                return false;
            }
        }

        return true;
    }
};