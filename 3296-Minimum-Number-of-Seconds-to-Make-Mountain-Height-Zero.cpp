class Solution {
public:
    long long minNumberOfSeconds(int mountainHeight, std::vector<int>& workerTimes) {
    
        long long left = 1; 
        long long right = 0;

       
        for (int time : workerTimes) {
            right = std::max(right, (long long)time * mountainHeight * (mountainHeight + 1) / 2);
        }

       
        while (left < right) {
            long long mid = left + (right - left) / 2; 
            long long totalUnits = 0;

            for (int time : workerTimes) {
                long long maxReduction = (long long)(-1 + sqrt(1 + 8 * mid / time)) / 2; 
                totalUnits += maxReduction;
                if (totalUnits >= mountainHeight) {
                        break;
                }  
            }

  
            if (totalUnits >= mountainHeight) {
                right = mid; 
            } else {
                left = mid + 1;
            }
        }

        return left; 
    }
};
