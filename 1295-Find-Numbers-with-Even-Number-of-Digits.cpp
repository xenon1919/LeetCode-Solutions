class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int evenDigitCount = 0;
        for(auto num : nums) {
            int digitCount= 0;
            while(num > 0) {
                num /= 10;
                digitCount++;
            }
            if(digitCount % 2 == 0) {
                evenDigitCount++;
            }
        }
        return evenDigitCount;
        
    }
};