class Solution {
public:
    static int maximumBeauty(vector<int>& nums, int k) {
        int frequency[100001] = {0};
        int maxElement = 0, minElement = 1e6;
        
        for (int num : nums) {
            frequency[num]++;
            maxElement = max(num, maxElement);
            minElement = min(num, minElement);
        }
        
        int currentCount = 0, maxCount = 0;
        
   
        for (int left = minElement, right = minElement; right <= maxElement; right++) {
            currentCount += frequency[right];
            while (right - left > 2 * k) {
                currentCount -= frequency[left];
                left++;
            }
            maxCount = max(maxCount, currentCount);
        }
        
        return maxCount;
    }
};
