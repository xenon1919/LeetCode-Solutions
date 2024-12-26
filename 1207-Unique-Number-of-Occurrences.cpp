class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> countMap;
        for(auto num : arr) {
            countMap[num]++;
        }
        unordered_set<int> occurences;
        for(const auto& [num, count] : countMap) {
            if(!occurences.insert(count).second) {
                return false;
            }
        }

        return true;
        
    }
};