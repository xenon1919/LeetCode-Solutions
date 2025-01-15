class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char, int> charCount;
        for(auto ch : chars) {
            charCount[ch]++;
        }

        int totalLength = 0;

        for(string& word : words) {
            unordered_map<char, int> wordCount;
            bool canForm = true;

            for(auto ch : word) {
                wordCount[ch]++;

                if(wordCount[ch] > charCount[ch]) {
                    canForm = false;
                    break;
                }
            }

            if(canForm) {
                totalLength += word.length();
            }
        }
        
        return totalLength;
    }
};