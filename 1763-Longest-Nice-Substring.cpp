class Solution {
public:
    string longestNiceSubstring(string s) {
      if (s.size() < 2) return "";

        unordered_set<char> charSet(s.begin(), s.end());
        
        for (int i = 0; i < s.size(); ++i) {
            if (charSet.count(tolower(s[i])) && charSet.count(toupper(s[i]))) continue;
            
            string left = longestNiceSubstring(s.substr(0, i));
            string right = longestNiceSubstring(s.substr(i + 1));
            
            return left.size() >= right.size() ? left : right;
        }
        
        return s;
    }
};