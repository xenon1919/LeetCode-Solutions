class Solution {
public:
  int oddCells(int m, int n, vector<vector<int>>& indices) {
    vector<int> row(m, 0), col(n, 0);
    for (auto& ind : indices) {
        row[ind[0]]++;
        col[ind[1]]++;
    }

    int oddRows = count_if(row.begin(), row.end(), [](int x) { return x % 2; });
    int oddCols = count_if(col.begin(), col.end(), [](int x) { return x % 2; });

    return oddRows * (n - oddCols) + oddCols * (m - oddRows);
}

};