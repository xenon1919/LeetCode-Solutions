class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> result;
        unordered_map<char, int> lastIndex;
        
        
        for (int i = 0; i < s.length(); i++) {
            lastIndex[s[i]] = i;
        }
        
        int start = 0, end = 0;
        for (int i = 0; i < s.length(); i++) {
            end = max(end, lastIndex[s[i]]);
            if (i == end) {
                result.push_back(end - start + 1);
                start = i + 1;
            }
        }
        
        return result;
    }
};