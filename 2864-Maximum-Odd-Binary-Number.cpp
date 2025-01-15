class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int countOne = count(s.begin(), s.end(), '1');

        string result = string(countOne - 1, '1') + string(s.length() - countOne, '0') + '1';
        return result;
        
    }
};