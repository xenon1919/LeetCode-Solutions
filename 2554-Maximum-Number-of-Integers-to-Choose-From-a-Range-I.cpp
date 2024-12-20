class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        unordered_set<int> bannedSet(banned.begin(), banned.end());
        vector<int> validNumbers;
        for(int i = 1; i <= n; ++i) {
            if(bannedSet.find(i) == bannedSet.end()) {
                validNumbers.push_back(i);
            }
        }
        sort(validNumbers.begin(), validNumbers.end());

        int count = 0;
        int currentSum = 0;
        for(int num : validNumbers) {
            if(currentSum + num > maxSum) {
                break;
            }
            currentSum += num;
            ++count;
        }
        return count;
    }
};