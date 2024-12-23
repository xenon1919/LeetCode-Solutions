class Solution {
public:
    string reorderSpaces(string text) {
        int spaceCount = 0;
        vector<string> words;
        string word;
        
        for(char ch : text) {
            if(ch == ' ') {
                spaceCount++;
            }
        }
        
        stringstream ss(text);
        while(ss >> word) {
            words.push_back(word);
        }
        int numWords = words.size();
        int spaceBetween = numWords > 1 ? spaceCount / (numWords - 1) : 0;
        int extraSpaces = numWords > 1 ? spaceCount % (numWords - 1) : spaceCount;
        
        string result;
        for(int i = 0; i < numWords; i++) {
            result += words[i];
            if(i < numWords - 1) {
                result += string(spaceBetween, ' ');
            }
        }
        result += string(extraSpaces, ' ');
        return result;
        
    }
};