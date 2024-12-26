class Solution {
public:
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
        vector<int> targetCount(26, 0);

        for(auto c : licensePlate) {
            if(isalpha(c)) {
                targetCount[tolower(c) - 'a']++;
            }
        }

        string result;
        int minLength = INT_MAX;

        for(const string& word : words) {
            vector<int> wordCount(26, 0);

            for(auto c : word) {
                wordCount[c - 'a']++;
            }

            bool isCompleting = true;
            for(int i = 0; i < 26; i++) {
                if(wordCount[i] < targetCount[i]) {
                    isCompleting = false;
                    break;
                }
            }

            if(isCompleting && word.length() < minLength) {
                result = word;
                minLength = word.length();
            }
        }

        return result;
        
    }
};