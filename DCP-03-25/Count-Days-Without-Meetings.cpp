#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {

        sort(meetings.begin(), meetings.end());

        int totalMeetingDays = 0, prevEnd = 0;
        
        
        for (const auto& m : meetings) {
            int start = max(m[0], prevEnd + 1); 
            int end = m[1];

            if (start <= end) {
                totalMeetingDays += (end - start + 1);
                prevEnd = end;
            }
        }

   
        return days - totalMeetingDays;
    }
};
