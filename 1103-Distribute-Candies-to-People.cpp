class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int> result(num_people, 0);
        int i = 0;
        int give = 1;

        while(candies > 0) {
            result[i % num_people] += min(give, candies);
            candies -= give;
            give++;
            i++;
        }
        
        return result;
    }
};