class Solution {
public:
    int countBeautifulPairs(vector<int>& nums) {
        int n = nums.size();
        int count = 0;

       
        auto getFirstDigit = [](int num) {
            while (num >= 10) {
                num /= 10;
            }
            return num;
        };

    
        for (int i = 0; i < n; ++i) {
            int firstDigit = getFirstDigit(nums[i]);
            for (int j = i + 1; j < n; ++j) {
                int lastDigit = nums[j] % 10;
                if (gcd(firstDigit, lastDigit) == 1) {
                    ++count;
                }
            }
        }

        return count;
    }
};
