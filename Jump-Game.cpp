   class Solution {

public:

    bool canJump(vector<int>& nums) {

        int maxReach = 0;

        for (int i = 0; i < nums.size(); ++i) {

            if (i > maxReach) {

                return false; // Cannot reach this position

            }

            maxReach = max(maxReach, i + nums[i]);

        }

        return true; // Successfully reached the end

    }

};    
    
