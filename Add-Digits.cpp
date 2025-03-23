class Solution {
public:
    int addDigits(int num) {
        int digit = 0;
        int sum = 0;
        if(num < 0 || num < 10) {
            return num;
        }

        while(num > 0) {
            digit = num % 10;
            sum += digit;
            num /= 10;
        }
        return addDigits(sum);
        
    }
};