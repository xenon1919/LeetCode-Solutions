class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        unordered_map<int, int> sumMap;
        int count = 0;

        for(auto a : nums1) {
            for(auto b : nums2) {
                sumMap[a + b]++;
            }
        }

        for(auto c : nums3) {
            for(auto d: nums4) {
                int target = -(c + d);
                if(sumMap.find(target) != sumMap.end()) {
                    count += sumMap[target];
                }
            }
        }

        return count;
        
    }
};