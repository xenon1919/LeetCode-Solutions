class Solution {
public:
    bool buddyStrings(string s, string goal) {
        if(s.length() != goal.length()) {
            return false;
        }
        if(s == goal) {
            unordered_set<char> uniqueChars(s.begin(), s.end());
            return uniqueChars.size() < s.size();
        }

        vector<int> diffIndices;
        for(int i = 0; i < s.length(); i++) {
            if(s[i] != goal[i]) {
                diffIndices.push_back(i);
            }
        }

        return diffIndices.size() == 2 && s[diffIndices[0]] == goal[diffIndices[1]] && s[diffIndices[1]] == goal[diffIndices[0]];
        
    }
};