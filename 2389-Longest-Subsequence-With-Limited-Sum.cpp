#include <vector>
#include <algorithm>
#include <numeric> // for std::accumulate
using namespace std;

class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        // Step 1: Sort the nums array
        sort(nums.begin(), nums.end());
        
        // Step 2: Create prefix sums
        vector<int> prefixSums(nums.size());
        prefixSums[0] = nums[0];
        for (int i = 1; i < nums.size(); ++i) {
            prefixSums[i] = prefixSums[i - 1] + nums[i];
        }
        
        // Step 3: Prepare the answer for each query
        vector<int> answer(queries.size());
        for (int i = 0; i < queries.size(); ++i) {
            // Binary search to find the maximum size of subsequence
            // where sum is less than or equal to queries[i]
            answer[i] = upper_bound(prefixSums.begin(), prefixSums.end(), queries[i]) - prefixSums.begin();
        }
        
        return answer; // Return the answers for all queries
    }
};
