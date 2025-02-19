class Solution {
public:
    void generateHappyStrings(int n, string &current, vector<string> &happyStrings) {
        if (current.size() == n) {
            happyStrings.push_back(current);
            return;
        }
        for (char c : {'a', 'b', 'c'}) {
            if (current.empty() || current.back() != c) {
                current.push_back(c);
                generateHappyStrings(n, current, happyStrings);
                current.pop_back();
            }
        }
    }
    
    string getHappyString(int n, int k) {
        vector<string> happyStrings;
        string current = "";
        generateHappyStrings(n, current, happyStrings);
        
        if (k > happyStrings.size()) return "";
        return happyStrings[k - 1];
    }
};