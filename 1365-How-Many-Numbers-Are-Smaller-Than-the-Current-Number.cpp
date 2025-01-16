class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> count(101, 0);

        for(int num : nums) {
            count[num]++;
        }

        for(int i = 1; i < 101; i++) {
            count[i] += count[i-1];
        }

        vector<int> result(nums.size());

        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == 0) {
                result[i] = 0;
            }
            else {
                result[i] = count[nums[i] - 1];
            }
        }

        return result;
        
    }
};