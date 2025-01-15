class Solution {
public:
    int countDigits(int num) {
        int original_num = num;
        int count = 0;

        while(num > 0) {
            int digit = num % 10;
            if(original_num % digit == 0) {
                count++;
            }
            num /= 10;
        }
        return count;
        
    }
};