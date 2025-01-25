class Solution {

public:

    long long minCost(vector<int>& a, vector<int>& b, long long k) {

        long long n = a.size();

        long long without_rearranging = 0; 

        long long with_rearranging = 0;

    

        for (int i = 0; i < n; ++i) {

            without_rearranging += abs(a[i] - b[i]);

        }

        

        sort(a.begin(), a.end());

        sort(b.begin(), b.end());

        for (int i = 0; i < n; ++i) {

            with_rearranging += abs(a[i] - b[i]);

        }


        with_rearranging += k;

    

        return min(without_rearranging, with_rearranging);

    }

};