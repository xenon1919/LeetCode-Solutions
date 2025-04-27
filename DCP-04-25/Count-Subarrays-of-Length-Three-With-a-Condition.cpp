class Solution {

public:

    int countSubarrays(vector<int>& nums) {

        int count = 0;

        int n = nums.size();

        for (int i = 0; i <= n - 3; i++) {

            int a = nums[i];

            int b = nums[i + 1];

            int c = nums[i + 2];

            if (2 * (a + c) == b) {

                count++;

            }

        }

        return count;

    }

};
        
    
