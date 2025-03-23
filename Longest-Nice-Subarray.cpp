class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int left = 0, orMask = 0, maxLen = 0;

        for (int right = 0; right < nums.size(); right++) {
            
            while ((orMask & nums[right]) != 0) {
                orMask ^= nums[left]; 
                left++;
            }

       
            orMask |= nums[right];

            maxLen = max(maxLen, right - left + 1);
        }

        return maxLen;
    }
};
