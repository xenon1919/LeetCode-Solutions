class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        sort(nums.begin(), nums.end());
        long long count = 0;
        int n = nums.size();

        for(int i = 0; i < n - 1; i++) {
            auto j_min = lower_bound(nums.begin() + i + 1,nums.end(), lower - nums[i]);
            auto j_max = upper_bound(nums.begin() + i + 1, nums.end(), upper - nums[i]) - 1;
            
            if (j_min <= j_max) {
                count += (j_max - j_min + 1);
            }
        }
        
        return count;
        }
    
};