class Solution {
public:
    string decodeString(string s) {
         stack<pair<string, int>> st; 
        string currStr = \\;       
        int currNum = 0;            
        
        for (char c : s) {
            if (isdigit(c)) {
           
                currNum = currNum * 10 + (c - '0');
            } else if (c == '[') {
         
                st.push({currStr, currNum});
        
                currStr = \\;
                currNum = 0;
            } else if (c == ']') {
          
                auto [prevStr, repeatCount] = st.top();
                st.pop();
              string repeatedStr = \\;
                for (int i = 0; i < repeatCount; i++) {
                    repeatedStr += currStr;
                }
                currStr = prevStr + repeatedStr;
            } else {
         
                currStr += c;
            }
        }
        
        return currStr;
    }
};