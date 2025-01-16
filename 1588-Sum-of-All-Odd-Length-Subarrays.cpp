class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int totalSum = 0;
        int n = arr.size();

        for(int i = 0; i < n; i++) {
            int totalSubarrays = (i + 1) * (n - i);
            int oddCount = (totalSubarrays + 1) / 2;
            totalSum += oddCount * arr[i];
        }

        return totalSum;   
    }
};