class Solution {
public:
    double largestSumOfAverages(vector<int>& nums, int k) {
        int n = nums.size();
        vector<double> prefixSum(n + 1, 0);
        
        
        for (int i = 1; i <= n; ++i) {
            prefixSum[i] = prefixSum[i - 1] + nums[i - 1];
        }
        
      
        vector<vector<double>> dp(n + 1, vector<double>(k + 1, 0));
        
     
        for (int i = 1; i <= n; ++i) {
            dp[i][1] = prefixSum[i] / i;  
        }
        
      
        for (int j = 2; j <= k; ++j) {
            for (int i = 1; i <= n; ++i) {
                for (int p = 1; p <= i; ++p) {
                    double avg = (prefixSum[i] - prefixSum[p - 1]) / (i - p + 1);
                    dp[i][j] = max(dp[i][j], dp[p - 1][j - 1] + avg);
                }
            }
        }
        
        return dp[n][k]; 
    }
};
