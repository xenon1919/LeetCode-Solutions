class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> charCount;

        for(auto c : magazine) {
            charCount[c]++;
        }

        for(auto c : ransomNote) {
            if(charCount[c] <= 0) {
                return false;
            }
            charCount[c]--;
        }

        return true;
        
    }
};