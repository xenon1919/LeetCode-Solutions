class Solution {
public:
    int total = 0;

    void dfs(vector<int>& nums, int index, int currentXOR) {
        if (index == nums.size()) {
            total += currentXOR;
            return;
        }

       
        dfs(nums, index + 1, currentXOR ^ nums[index]);

        
        dfs(nums, index + 1, currentXOR);
    }

    int subsetXORSum(vector<int>& nums) {
        dfs(nums, 0, 0);
        return total;
    }
};
