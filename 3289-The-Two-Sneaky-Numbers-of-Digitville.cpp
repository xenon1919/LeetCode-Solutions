class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_map<int, int> freq;
        vector<int> result;

        for(auto num : nums) {
            freq[num]++;
        }
        for(auto& [key, value] : freq) {
            if(value == 2) {
                result.push_back(key);
                if(result.size() == 2) {
                    break;
                }
            }
        }

        return result;
    }
};