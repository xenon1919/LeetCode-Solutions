class Solution {
public:
    int captureForts(vector<int>& forts) {
        int maxCapture = 0;
        int lastFort = -1;
        
        for (int i = 0; i < forts.size(); i++) {
            if (forts[i] == 1 || forts[i] == -1) {
                if (lastFort != -1 && forts[i] != forts[lastFort]) {
                    maxCapture = max(maxCapture, i - lastFort - 1);
                }
                lastFort = i;
            }
        }
        
        return maxCapture;
    }
};
