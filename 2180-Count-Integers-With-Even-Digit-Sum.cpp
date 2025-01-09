class Solution {
public:
    int countEven(int num) {
        int count = 0;
        for(int i = 1; i <= num; i++) {
            int digitSum = 0;
            int temp = i;

            while(temp > 0) {
                digitSum += temp % 10;
                temp /= 10;
            }

            if(digitSum % 2 == 0) {
                count++;
            }
        }

        return count;
        
    }
};