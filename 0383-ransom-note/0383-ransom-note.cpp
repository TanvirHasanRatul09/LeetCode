class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {

        unordered_map<char, int> rFreq;
        unordered_map<char, int> mFreq;

        // Count ransomNote
        for (char c : ransomNote) {
            rFreq[c]++;
        }

        // Count magazine
        for (char c : magazine) {
            mFreq[c]++;
        }

        // Compare frequencies
        for (auto it : rFreq) {
            if (mFreq[it.first] < it.second) {
                return false;
            }
        }

        return true;
    }
};