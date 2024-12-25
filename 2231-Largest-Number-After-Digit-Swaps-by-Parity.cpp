class Solution {
public:
    int largestInteger(int num) {
        vector<int> digits;
        int temp = num;

        while(temp > 0) {
            digits.push_back(temp % 10);
            temp /= 10;
        }

        reverse(digits.begin(), digits.end());

        vector<int> evens, odds;
        for(auto digit : digits) {
            if(digit % 2 == 0) {
                evens.push_back(digit);
            }
            else {
                odds.push_back(digit);
            }
        }

            sort(evens.rbegin(), evens.rend());
            sort(odds.rbegin(), odds.rend());

            int evenIndex = 0;
            int oddIndex = 0;

            for(auto& digit : digits) {
                if(digit % 2 == 0) {
                    digit = evens[evenIndex++];
                }
                else {
                    digit = odds[oddIndex++];
                }
            }

            int result= 0;
            for(auto digit : digits) {
                result = result * 10 + digit;
            }

            return result;
        
    }
};