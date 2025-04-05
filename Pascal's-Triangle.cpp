class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        if(numRows == 1) {
            return {{1}};
        }

        vector<vector<int>> triangle = generate(numRows - 1);
        vector<int> prevRow = triangle.back();
        vector<int> currRow(numRows, 1);

        for(int i = 1; i < numRows - 1; i++) {
            currRow[i] = prevRow[i - 1] + prevRow[i];
        }
        triangle.push_back(currRow);
        return triangle;
        
    }
};