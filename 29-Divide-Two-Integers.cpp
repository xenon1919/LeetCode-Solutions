#include <limits>
using namespace std;

class Solution {
public:
    int divide(int dividend, int divisor) {
        // Handle special case
        if (dividend == 0) return 0;
        if (divisor == -1 && dividend == INT_MIN) return INT_MAX; // Overflow condition
        
        long long absDividend = (dividend < 0) ? -(long long)dividend : dividend;
        long long absDivisor = (divisor < 0) ? -(long long)divisor : divisor;
        long long quotient = 0;

        while (absDividend >= absDivisor) {
            long long temp = absDivisor, multiple = 1;
            while (absDividend >= (temp << 1)) {
                temp <<= 1;
                multiple <<= 1;
            }
            absDividend -= temp;
            quotient += multiple;
        }

        // Determine the sign of the result
        return ((dividend < 0) ^ (divisor < 0)) ? -quotient : quotient;
    }
};
