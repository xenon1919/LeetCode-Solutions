class Solution {
public:
    
    bool isPrime(int num) {
        if (num <= 1) return false;
        for (int i = 2; i * i <= num; ++i) {
            if (num % i == 0) return false;
        }
        return true;
    }
    
   
    long long factorial(int x) {
        long long result = 1;
        const int MOD = 1000000007;  
        for (int i = 2; i <= x; ++i) {
            result = (result * i) % MOD;
        }
        return result;
    }
    
    int numPrimeArrangements(int n) {
        int primeCount = 0;
        const int MOD = 1000000007; 
        
     
        for (int i = 1; i <= n; ++i) {
            if (isPrime(i)) {
                ++primeCount;
            }
        }
        
     
        int nonPrimeCount = n - primeCount;
        
        
        long long result = (factorial(primeCount) * factorial(nonPrimeCount)) % MOD;
        return result;
    }
};
