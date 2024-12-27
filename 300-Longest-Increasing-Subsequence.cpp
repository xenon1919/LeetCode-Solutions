class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> lis;
        
        for(auto num : nums) {
            int left = 0;
            int right = lis.size();

            while(left < right) {
                int mid = left + (right - left) / 2;
                if(lis[mid] < num) {
                    left = mid + 1;
                }
                else {
                    right = mid;
                }
            }

            if(left == lis.size()) {
                lis.push_back(num);
            }
            else {
                lis[left] = num;
            }
        }
        return lis.size();
        
    }
};