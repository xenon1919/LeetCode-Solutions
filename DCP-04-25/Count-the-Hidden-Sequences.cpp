class Solution {

public:

    int numberOfArrays(vector<int>& differences, int lower, int upper) {

        long long sum = 0;

        long long min_prefix = 0, max_prefix = 0;

        for (int diff : differences) {

            sum += diff;

            min_prefix = min(min_prefix, sum);

            max_prefix = max(max_prefix, sum);

        }

        long long min_start = lower - min_prefix;

        long long max_start = upper - max_prefix;

        return max(0LL, max_start - min_start + 1);

    }

};
        
    
