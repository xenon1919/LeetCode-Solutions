class Solution {
public:
    int numTilePossibilities(string tiles) {
        vector<int> freq(26, 0);
        for (char ch : tiles) {
            freq[ch - 'A']++;
        }
        return backtrack(freq);
    }
    
    int backtrack(vector<int>& freq) {
        int count = 0;
        for (int i = 0; i < 26; i++) {
            if (freq[i] > 0) {
                freq[i]--;  
                count += 1 + backtrack(freq); 
                freq[i]++;  
            }
        }
        return count;
    }
};
