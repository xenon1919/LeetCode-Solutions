class Solution {
public:
    string getSmallestString(string s) {
        string result = s;
        for(int i = 0; i < s.length() - 1; ++i) {
            if((s[i] - '0' ) % 2 == (s[i + 1] - '0') % 2) {
                swap(s[i], s[i + 1]);
                if(s < result) {
                    result = s;
                }
                swap(s[i], s[i + 1]);
            }
        }

        return result;
    }
};