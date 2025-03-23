class Solution {
public:
    int similarPairs(vector<string>& words) {
        unordered_map<string, int> freqMap;
        int count = 0;

        for (auto& word : words) {
            string key = "";
            vector<bool> seen(26, false);

            for (char ch : word) {
                seen[ch - 'a'] = true;
            }
            for (int i = 0; i < 26; i++) {
                if (seen[i]) key += ('a' + i);
            }

           
            count += freqMap[key];
            freqMap[key]++;
        }

        return count;
    }
};
