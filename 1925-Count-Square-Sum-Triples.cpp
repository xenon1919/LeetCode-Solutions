class Solution {
public:
    int countTriples(int n) {
        int count = 0;
        for(int c = 1; c <= n; ++c) {
            for(int a = 1; a < c; ++a) {
                int bSquared = c * c - a * a;
                int b = sqrt(bSquared);
                if(b * b == bSquared && b <= n) {
                    count++;
                }
            }
        }
        return count;
        
    }
};