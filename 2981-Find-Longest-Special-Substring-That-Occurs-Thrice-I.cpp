class Solution {
public:
    int maximumLength(string s) {
        int n = s.length();
        for(int len = n; len >= 1; --len) {
            unordered_map<string, int> freqMap;
            for(int i = 0; i + len <= n; ++i) {
                string sub = s.substr(i, len);
                if(all_of(sub.begin(), sub.end(), [&](char c) {
                    return c == sub[0];
                })) {
                    freqMap[sub]++;
                }
            }
            for(auto &[sub, freq] : freqMap) {
                if(freq >= 3) {
                    return len;
                }
            }
        }
        return -1;
        
    }
};