class Solution {
public:
    int fillCups(vector<int>& amount) {
        int total = amount[0] + amount[1] + amount[2];
        int maxVal = *max_element(amount.begin(), amount.end());
        return max(maxVal, (total + 1) / 2);
        
    }
};