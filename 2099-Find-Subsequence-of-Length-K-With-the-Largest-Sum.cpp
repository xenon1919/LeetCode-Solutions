class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        vector<pair<int, int>> paired;
        for(int i = 0; i < nums.size(); ++i) {
            paired.push_back({nums[i], i});
        }
        sort(paired.begin(), paired.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
            return a.first > b.first;
        });

        vector<int> indices;
        for(int i = 0; i < k; ++i) {
            indices.push_back(paired[i].second);
        }
        sort(indices.begin(), indices.end());
        vector<int> result;
        for(auto index : indices) {
            result.push_back(nums[index]);
        }
        return result;
    }
};