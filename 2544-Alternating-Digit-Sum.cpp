class Solution {
public:
    int alternateDigitSum(int n) {
        int sum = 0;
        bool isPositive = true;
        
     
        vector<int> digits;

        while (n > 0) {
            digits.push_back(n % 10);
            n /= 10;
        }


        for (int i = digits.size() - 1; i >= 0; i--) {
            sum += isPositive ? digits[i] : -digits[i];
            isPositive = !isPositive; 
        }

        return sum; 
    }
};
