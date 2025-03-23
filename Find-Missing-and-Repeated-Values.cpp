class Solution {
public:
    vector<int> findMissingAndRepeatedValues(std::vector<std::vector<int>>& grid) {
        int n = grid.size();
        int n2 = n * n;
        unordered_set<int> seen;
        int repeated = -1, missing = -1;

        for (const auto& row : grid) {
            for (int num : row) {
                if (seen.count(num)) {
                    repeated = num;
                }
                seen.insert(num);
            }
        }
        
     
        for (int i = 1; i <= n2; ++i) {
            if (!seen.count(i)) {
                missing = i;
                break;
            }
        }
        
        return {repeated, missing};
    }
};