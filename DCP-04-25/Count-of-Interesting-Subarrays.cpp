class Solution {

public:

    long long countInterestingSubarrays(vector<int>& nums, int modulo, int k) {

        long long res = 0;

        unordered_map<int, long long> prefixCount;

        prefixCount[0] = 1;  

        

        int count = 0;

        for (int num : nums) {

            if (num % modulo == k) count++;

            

            int currMod = count % modulo;

            int target = (currMod - k + modulo) % modulo;

            

            if (prefixCount.count(target)) {

                res += prefixCount[target];

            }

            

            prefixCount[currMod]++;

        }

        

        return res;

    }

};
        
    
