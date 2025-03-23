class Solution {
public:
    bool divideArray( vector<int>& nums) {
         unordered_map<int, int> freqMap;
        
   
        for(int num : nums) {
            freqMap[num]++;
        }
   
        for(const auto& entry : freqMap) {
            if(entry.second % 2 != 0) {
                return false;
            }
        }
        
        return true; 
    }
};
