#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

class Solution {
public:
    int findRadius(vector<int>& houses, vector<int>& heaters) {
        sort(houses.begin(), houses.end());
        sort(heaters.begin(), heaters.end());
        
        int radius = 0;
        
        for (int house : houses) {
          
            auto it = lower_bound(heaters.begin(), heaters.end(), house);
            int dist1 = (it == heaters.end()) ? INT_MAX : abs(*it - house);
            int dist2 = (it == heaters.begin()) ? INT_MAX : abs(*prev(it) - house);
            int closest = min(dist1, dist2);
            radius = max(radius, closest);
        }
        
        return radius;
    }
};
