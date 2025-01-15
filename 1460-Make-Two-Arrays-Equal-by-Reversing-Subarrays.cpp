class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        unordered_map<int, int> targetCount, arrCount;

        for(auto num : target) {
            targetCount[num]++;
        }

        for(auto num : arr) {
            arrCount[num]++;
        }

        return targetCount == arrCount;
        
    }
};