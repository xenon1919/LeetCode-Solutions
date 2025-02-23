
   class Solution {

public:

    vector<int> getStrongest(vector<int>& arr, int k) {

        sort(arr.begin(), arr.end());

        int n = arr.size();

        int median = arr[(n - 1) / 2];

        sort(arr.begin(), arr.end(), [median](int a, int b) {

            int strengthA = abs(a - median);

            int strengthB = abs(b - median);

            if (strengthA == strengthB) return a > b;

            return strengthA > strengthB;

        });

        return vector<int>(arr.begin(), arr.begin() + k);

    }

};     
