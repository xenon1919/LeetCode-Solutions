class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
    
        unordered_set<string> wordSet(wordDict.begin(), wordDict.end());
        
     
        int n = s.length();
        vector<bool> dp(n + 1, false);
        dp[0] = true; 
        
    
        for (int i = 1; i <= n; i++) { 
            for (int j = 0; j < i; j++) { 
                string substring = s.substr(j, i - j); 
                
           
                if (dp[j] && wordSet.count(substring)) {
                    dp[i] = true; 
                    break;
                }
            }
        }
        

        return dp[n];
    }
};
