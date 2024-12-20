class Solution {
public:
    int minimumSize(vector<int>& nums, int maxOperations) {
        int low = 1;
        int high = *max_element(nums.begin(), nums.end());
        int result = high;

        auto canDistribute = [&](int penalty) -> bool {
            int operations = 0;
            for(auto balls : nums) {
                if(balls > penalty) {
                    operations += (balls - 1) / penalty;
                }
            }
            return operations <= maxOperations;
            };
            while(low < high) {
                int mid = low + (high - low) / 2;
                if(canDistribute(mid)) {
                    result = mid;
                    high = mid;
                }
                else {
                    low = mid + 1;
                }
            }
            return result;
            
    }
};