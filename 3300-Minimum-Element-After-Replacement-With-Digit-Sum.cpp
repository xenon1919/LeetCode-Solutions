class Solution {
public:
    int minElement(vector<int>& nums) {
        for(auto& num : nums) {
            num = digitSumFromString(num);
        }
        return *min_element(nums.begin(), nums.end());
        
    }
    int digitSumFromString(int num){

        string numStr = to_string(num);
        int sum = 0;
        for(auto ch : numStr) {
            sum += ch - '0';
        }
        return sum;
        
    }
};