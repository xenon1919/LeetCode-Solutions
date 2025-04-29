#include <vector>

using namespace std;

class Solution {

public:

    long long countSubarrays(vector<int>& nums, int k) {

        int n = nums.size();

        int maxVal = *max_element(nums.begin(), nums.end());

        long long ans = 0;

        int left = 0, count = 0;

        

        for (int right = 0; right < n; ++right) {

            if (nums[right] == maxVal) {

                count++;

            }

            

            while (count >= k) {

                if (nums[left] == maxVal) {

                    count--;

                }

                left++;

            }

            

            ans += left;

        }

        

        return ans;

    }

};
        
    
