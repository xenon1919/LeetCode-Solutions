class Solution {

public:

    long long countGood(vector<int>& nums, int k) {

        unordered_map<int, int> freq;

        long long count = 0, res = 0;

        int l = 0;

        

        for (int r = 0; r < nums.size(); ++r) {

            count += freq[nums[r]]; 

            freq[nums[r]]++;

            

            

            while (count >= k) {

                res += nums.size() - r; 

                count -= freq[nums[l]] - 1;

                freq[nums[l]]--;

                l++;

            }

        }

        return res;

    }

};
        
    
