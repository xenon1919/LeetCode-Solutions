class Solution {
public:
    int arraySign(vector<int>& nums) {
        int negativeCount = 0;
        for(auto num : nums) {
            if(num == 0) {
                return 0;
            }
            if(num < 0) {
                negativeCount++;
            }
        }

        return (negativeCount % 2 == 0) ? 1 : -1;
        
    }
};