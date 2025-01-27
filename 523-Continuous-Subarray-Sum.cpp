class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> prefix_map;
        prefix_map[0] = -1;
        int cumulative_sum = 0;

        for (int i = 0; i < nums.size(); ++i) {
            cumulative_sum += nums[i];
            int remainder = cumulative_sum % k;
            if (remainder < 0) remainder += k;

            if (prefix_map.find(remainder) != prefix_map.end()) {
                if (i - prefix_map[remainder] > 1) return true;
            } else {
                prefix_map[remainder] = i;
            }
        }

        return false;
    }
};
        

