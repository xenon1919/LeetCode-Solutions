class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        // There are only 9 possible values, so we can use a fixed array of size 100
        int count[100] = {0};
        int result = 0;

        for (auto& d : dominoes) {
            int a = d[0], b = d[1];
            // Normalize each pair (make sure a <= b)
            int key = a < b ? a * 10 + b : b * 10 + a;
            result += count[key];
            count[key]++;
        }

        return result;
    }
};
