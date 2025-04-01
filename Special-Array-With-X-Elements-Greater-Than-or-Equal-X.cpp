class Solution {
public:
    int specialArray(std::vector<int>& nums) {
        sort(nums.begin(), nums.end()); \
        int n = nums.size();
        
        for (int x = 1; x <= n; ++x) {
        
            int count = n - (lower_bound(nums.begin(), nums.end(), x) - nums.begin());
            
            if (count == x) {
                return x;
            }
        }
        
        return -1;
    }
};
