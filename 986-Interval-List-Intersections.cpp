class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
        vector<vector<int>> result;
        int i = 0;
        int j = 0;

        while(i < firstList.size() && j < secondList.size()) {
            int start1 = firstList[i][0], end1 = firstList[i][1];
            int start2 = secondList[j][0], end2 = secondList[j][1];

            int intersectionStart = max(start1, start2);
            int intersectionEnd = min(end1, end2);

            if(intersectionStart <= intersectionEnd) {
                result.push_back({intersectionStart, intersectionEnd});
            }

            if(end1 < end2) {
                i++;
            }
            else {
                j++;
            }
        }

        return result;

        
    }
};