class Solution {
public:
    bool hasSameDigits(string s) {
        while (s.length() > 2) {
            string newS = "";
            for (int i = 0; i < s.length() - 1; i++) {
                newS += to_string((s[i] - '0' + s[i + 1] - '0') % 10);
            }
            s = newS;
        }
        return s[0] == s[1];
    }
};
