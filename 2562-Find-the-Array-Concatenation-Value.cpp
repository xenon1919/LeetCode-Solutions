class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        long long concatenationValue = 0;
        int left = 0;
        int right = nums.size() - 1;

        while(left <= right) {
            if(left == right) {
                concatenationValue += nums[left];
            }

            else {
                string concatStr = to_string(nums[left]) + to_string(nums[right]);
                concatenationValue += stoll(concatStr);
            }
            left++;
            right--;
        }


        return concatenationValue;
    }
};