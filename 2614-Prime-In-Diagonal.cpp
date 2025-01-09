class Solution {
public:
    int diagonalPrime(vector<vector<int>>& nums) {
        int n = nums.size();
        int maxPrime = 0;

        auto isPrime =[](int num) {
            if(num <= 1) {
                return false;
            }
            for(int i = 2; i * i <= num; i++) {
                if(num % i == 0) {
                    return false;
                }
                
            }

            return true;
        };

        for(int i = 0; i < n; i++) {
            if(isPrime(nums[i][i]))  {
                maxPrime = max(maxPrime, nums[i][i]);
            }
            if(isPrime(nums[i][n - 1 - i])) {
                maxPrime = max(maxPrime,nums[i][n - 1 - i]);
            }
        }

        return maxPrime;
        
    }
};