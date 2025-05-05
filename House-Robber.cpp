class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;
        if (n == 1) return nums[0];

        int prev1 = nums[0];         // dp[i-1]
        int prev2 = 0;               // dp[i-2]

        for (int i = 1; i < n; ++i) {
            int current = max(prev1, nums[i] + prev2);
            prev2 = prev1;
            prev1 = current;
        }

        return prev1;
    }
};
