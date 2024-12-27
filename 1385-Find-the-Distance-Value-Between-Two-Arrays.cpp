class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        sort(arr2.begin(), arr2.end());
        int distanceValue = 0;

        for(auto num : arr1) {
            bool isValid = true;

            auto lower = lower_bound(arr2.begin(), arr2.end(), num - d);
            auto upper = upper_bound(arr2.begin(), arr2.end(), num + d);

            if(lower != upper) {
                isValid = false;
            }

            if(isValid) {
                distanceValue++;
            }
        }

        return distanceValue;
        
    }
};