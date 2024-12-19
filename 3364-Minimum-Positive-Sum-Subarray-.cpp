class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int n = nums.size();
        int result = INT_MAX; 
        vector<int> prefixSum(n + 1, 0); 
        

        for (int i = 0; i < n; ++i) {
            prefixSum[i + 1] = prefixSum[i] + nums[i];
        }

        for (int len = l; len <= r; ++len) {
           
            for (int i = 0; i + len <= n; ++i) {
                int subarraySum = prefixSum[i + len] - prefixSum[i];
                if (subarraySum > 0) {
                    result = min(result, subarraySum);
                }
            }
        }

     
        return result == INT_MAX ? -1 : result;
    }
};
