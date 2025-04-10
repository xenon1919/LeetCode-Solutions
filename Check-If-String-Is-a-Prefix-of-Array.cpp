class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        string prefix = "";
        for(string word : words) {
            prefix += word;

            if(prefix == s) {
                return true;
            }

            if(prefix.length() > s.length() || s.substr(0, prefix.length()) != prefix)  {
                return false;
            }
        }

        return false;
    }
};