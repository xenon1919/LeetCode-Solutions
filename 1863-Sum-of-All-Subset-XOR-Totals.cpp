class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        return dfs(nums, 0, 0);
    }
    
private:
    int dfs(const vector<int>& nums, int index, int currentXOR) {
    
        if (index == nums.size()) {
            return currentXOR;
        }

        int exclude = dfs(nums, index + 1, currentXOR);
        
     
        int include = dfs(nums, index + 1, currentXOR ^ nums[index]);
        
   
        return exclude + include;
    }
};
