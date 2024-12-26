class Solution {
public:
    long long gcd(long long a, long long b) {
        return b == 0 ? a : gcd(b, a % b);
    }

    long long lcm(long long a, long long b) {
        return a / gcd(a, b) * b;
    }

    long long maxScore(vector<int>& nums) {
        int n = nums.size();
        long long maxFactorScore = 0;
        long long currentGCD = nums[0];

        for (int num : nums) {
            currentGCD = gcd(currentGCD, num);
        }

        long long currentLCM = nums[0];
        for (int num : nums) {
            currentLCM = lcm(currentLCM, num);
        }

        maxFactorScore = currentGCD * currentLCM;

        for (int i = 0; i < n; ++i) {
            long long newGCD = 0;
            long long newLCM = 1;
            for (int j = 0; j < n; ++j) {
                if (j != i) {
                    newGCD = gcd(newGCD == 0 ? nums[j] : newGCD, nums[j]);
                    newLCM = lcm(newLCM, nums[j]);
                }
            }
            maxFactorScore = max(maxFactorScore, newGCD * newLCM);
        }

        return maxFactorScore;
        
    }
};