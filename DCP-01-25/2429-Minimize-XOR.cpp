class Solution {
public:
    int minimizeXor(int num1, int num2) {
        int count2 = __builtin_popcount(num2); 
        int x = 0;

        for(int i = 31; i >= 0 && count2 > 0; --i) {
            if((num1 & (1 << i)) != 0) {
                x |= (1 << i);
                count2--;
            }
        }

        for(int i = 0; i < 32 && count2 > 0; ++i) {
            if((x & (1 << i)) == 0) {
                x |= (1 << i);
                count2--;
            }
        }

        return x;
    }
};
