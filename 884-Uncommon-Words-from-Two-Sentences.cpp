class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string, int> wordCount;

        auto countWords = [&](string s) {
         istringstream stream(s);
            string word;
            while(stream >> word) {
                wordCount[word]++;
            }
        };

        countWords(s1);
        countWords(s2);

        vector<string> result;

        for(const auto& [word, count] : wordCount) {
            if(count == 1) {
                result.push_back(word);
            }
        }

        return result;
        
    }
};