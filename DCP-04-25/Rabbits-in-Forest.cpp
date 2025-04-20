

class Solution {

public:

    int numRabbits(vector<int>& answers) {

        unordered_map<int, int> count;

        for (int ans : answers) {

            count[ans]++;

        }

        int res = 0;

        for (auto& [k, v] : count) {

            int groupSize = k + 1;

        

            res += ((v + groupSize - 1) / groupSize) * groupSize;

        }

        return res;

    }

};
        
    
