class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size() && k > 0; i++) {
            if (nums[i] < 0) {
                nums[i] = -nums[i];
                k--;
            }
        }

        int min_val = *min_element(nums.begin(), nums.end());

        if (k % 2 == 1) {
            return accumulate(nums.begin(), nums.end(), 0) - 2 * min_val;
        }

        return accumulate(nums.begin(), nums.end(), 0);
    }
};
