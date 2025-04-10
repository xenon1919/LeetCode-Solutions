class Solution {

public:

    int maximumNumberOfStringPairs(vector<string>& words) {

        unordered_set<string> seen;

        int count = 0;

        for (const string& word : words) {

            string reversed = word;

            reverse(reversed.begin(), reversed.end());

            

            if (seen.count(reversed)) {

                count++;

                seen.erase(reversed); // remove to ensure one-time use

            } else {

                seen.insert(word);

            }

        }

        return count;

    }

};
        

