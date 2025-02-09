class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        long long n = nums.size();
        long long totalPairs = (n * (n - 1)) / 2; 
        unordered_map<int, long long> freq;
        long long goodPairs = 0;

        for (int i = 0; i < n; ++i) {
            int diff = nums[i] - i;
            if (freq.find(diff) != freq.end()) {
                goodPairs += freq[diff];
            }
            freq[diff]++;
        }

        return totalPairs - goodPairs;
    }
};
