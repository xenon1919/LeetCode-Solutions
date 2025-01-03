class Solution {
public:
    int maxScore(string s) {
        int totalOnes = 0;
        for (char c : s) {
            if (c == '1') {
                totalOnes++;
            }
        }
        
        int maxScore = 0;
        int leftZeros = 0, leftOnes = 0;
        
        for (int i = 0; i < s.size() - 1; ++i) { 
            if (s[i] == '0') {
                leftZeros++;
            } else {
                leftOnes++;
            }
            
            int rightOnes = totalOnes - leftOnes;
            maxScore = max(maxScore, leftZeros + rightOnes);
        }
        
        return maxScore;
    }
};
