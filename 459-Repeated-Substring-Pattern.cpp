class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string doubled = s + s;
        return doubled.substr(1, doubled.length() - 2).find(s) != string::npos;
    }
};