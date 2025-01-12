class Solution {
public:
    bool canBeValid(string s, string locked) {
        if(s.length() % 2 != 0) {
            return false;
        }

        int open = 0;
        int balance = 0;

        for(int i = 0; i < s.length(); i++) {
            if(locked[i] == '0' || s[i] == '(') {
                open++;
            }
            else {
                open--;
            }
            balance++;
            if(open < 0) {
                return false;
            }
        }
        

        int close = 0;
        for(int i = s.length() - 1; i >= 0; i--) {
            if(locked[i] == '0' || s[i] == ')') {
                close++;
            }
            else {
                close--;
            }

            if(close < 0) {
                return false;
            }

     
        }
    
            return true;
    }
};