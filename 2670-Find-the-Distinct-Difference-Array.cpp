class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> diff(n);
        vector<int> prefixCount(n);
        vector<int> suffixCount(n);

        unordered_set<int> prefixSet;
        for(int i = 0; i < n; i++) {
            prefixSet.insert(nums[i]);
            prefixCount[i] = prefixSet.size();
        }

        unordered_set<int> suffixSet;
         for (int i = n - 1; i >= 0; i--) {
            suffixSet.insert(nums[i]);
            suffixCount[i] = suffixSet.size();
        }
        for (int i = 0; i < n; i++) {
            diff[i] = prefixCount[i] - (i + 1 < n ? suffixCount[i + 1] : 0);
        }

        return diff;
    }
};