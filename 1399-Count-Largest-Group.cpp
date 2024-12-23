class Solution {
public:
    int countLargestGroup(int n) {
        unordered_map<int, int> digitSumCount;
        for(int i = 1; i <= n; ++i) {
            int sum = getDigitSum(i);
            digitSumCount[sum]++;
        }
        int maxSize = 0;
        for(auto& pair : digitSumCount) {
            maxSize = max(maxSize, pair.second);
        }
        int count = 0;
        for(auto& pair : digitSumCount) {
            if(pair.second == maxSize) {
                count++;
            }
        }
        return count;
        
    }
private:
    int getDigitSum(int num) {
        int sum = 0;
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        return sum;
    }

};