class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        for (int num : nums) {
            if (num < k) return -1; // Impossible to reach k
        }

        set<int> uniqueAboveK;
        for (int num : nums) {
            if (num > k) uniqueAboveK.insert(num);
        }

        return uniqueAboveK.size(); 
    }
};
