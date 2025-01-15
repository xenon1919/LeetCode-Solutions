class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        
        int currentMax = *max_element(nums.begin(), nums.end());
        int currentMin = *min_element(nums.begin(), nums.end());

        int score = (currentMax - k) - (currentMin + k);

        return score < 0 ? 0 : score;
        
    }
};