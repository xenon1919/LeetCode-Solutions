class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors, int k) {
        int n = colors.size(), count = 0, len = 1;

        for (int i = 1; i < n + k - 1; i++) {
            if (colors[i % n] == colors[(i - 1) % n]) {
                len = 1;
            } else {
                len++;
                if (len >= k) count++;
            }
        }

        return count;
    }
};
