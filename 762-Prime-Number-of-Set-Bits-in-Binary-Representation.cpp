class Solution {
public:
    bool isPrime(int n) {
        if (n <= 1) return false;
        if (n == 2) return true; 
        if (n % 2 == 0) return false;
        for (int i = 3; i * i <= n; i += 2) {
            if (n % i == 0) return false;
        }
        return true;
    }
    
    int countPrimeSetBits(int left, int right) {
      
        unordered_set<int> primes;
        for (int i = 2; i <= 20; ++i) {
            if (isPrime(i)) {
                primes.insert(i);
            }
        }
        
        int count = 0;
        for (int num = left; num <= right; ++num) {
            int setBits = __builtin_popcount(num);
            if (primes.count(setBits)) {
                ++count;
            }
        }
        
        return count;
    }
};
