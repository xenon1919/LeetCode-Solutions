class Solution {
public:
    string thousandSeparator(int n) {
        string numStr = to_string(n);
        string result;
        int count = 0;
        for(int i = numStr.size() - 1; i >= 0; i--) {
            result += numStr[i];
            count++;

            if(count % 3 == 0 && i != 0) {
                result += '.';
            }
        }
        reverse(result.begin(), result.end());
        return result;
        
    }
};