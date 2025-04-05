class Solution {
public:
       vector<int> getRow(int rowIndex) {
        if (rowIndex == 0)
            return {1};

        vector<int> prev = getRow(rowIndex - 1);
        vector<int> curr(rowIndex + 1, 1);

        for (int i = 1; i < rowIndex; i++) {
            curr[i] = prev[i - 1] + prev[i];
        }

        return curr;
    }
};