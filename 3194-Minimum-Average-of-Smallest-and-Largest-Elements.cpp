class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<double> averages;

        int left = 0;
        int right = nums.size() - 1;

        while(left < right) {
            double avg = (nums[left] + nums[right]) / 2.0;
            averages.push_back(avg);
            left++;
            right--;
        }

        return *min_element(averages.begin(), averages.end());

        
    }
};