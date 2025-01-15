class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int even_index = 0; 
        int odd_index = 1;  
        
        
        while (even_index < nums.size() && odd_index < nums.size()) {
      
            if (nums[even_index] % 2 == 0) {
                even_index += 2; 
            }
     
            else if (nums[odd_index] % 2 != 0) {
                odd_index += 2; 
            }
 
            else {
                swap(nums[even_index], nums[odd_index]);
            }
        }
        
        return nums; 
        
    }
};