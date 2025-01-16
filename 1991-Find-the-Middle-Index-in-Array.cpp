class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int totalSum = 0;
        int leftSum = 0;

        for(auto num : nums) {
            totalSum += num;
        }

        for(auto i = 0; i < nums.size(); i++) {
            int rightSum = totalSum - leftSum - nums[i];
            if(leftSum == rightSum) {
                return i;
            }

            leftSum += nums[i];
        }

        return -1;
        
    }
};