class Solution {
public:
    string removeDuplicates(string s) {
        string stack;

        for(auto ch : s) {
            if(!stack.empty() && stack.back() == ch) {
                stack.pop_back();
            }
            else {
                stack.push_back(ch);
            }
        }

        return stack;
        
    }
};