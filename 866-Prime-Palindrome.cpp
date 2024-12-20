class Solution {
public:
    int primePalindrome(int minNumber) {
        if (8 <= minNumber && minNumber <= 11) return 11;


        for (int half = pow(10, (int)log10(minNumber) / 2); half < 100000; ++half) {
            string halfStr = to_string(half);
            string reversedHalf(halfStr.rbegin() + 1, halfStr.rend());
            int palindrome = stoi(halfStr + reversedHalf);

            if (palindrome >= minNumber && isPrime(palindrome)) {
                return palindrome;
            }
        }

        return -1; 
    }

    bool isPrime(int num) {
        if (num < 2) return false;
        if (num == 2 || num == 3) return true;
        if (num % 2 == 0 || num % 3 == 0) return false;
        for (int divisor = 5; divisor * divisor <= num; divisor += 6) {
            if (num % divisor == 0 || num % (divisor + 2) == 0) return false;
        }
        return true;
    }
};
