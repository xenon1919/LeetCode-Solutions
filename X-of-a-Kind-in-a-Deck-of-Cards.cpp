class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        unordered_map<int, int> freq;

    
        for (int num : deck) {

            freq[num]++;

        }

        int gcdVal = 0;

        for (auto& [num, count] : freq) {

            gcdVal = gcd(gcdVal, count);

        }

        return gcdVal > 1;
    }
};