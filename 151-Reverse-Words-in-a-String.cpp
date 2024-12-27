class Solution {
public:
    string reverseWords(string s) {
        int start = 0;
        int end = s.length() - 1;

        while(start <= end && s[start] == ' ') {
            start++;
        }
        while(end >= start && s[end] == ' ') {
            end--;
        }

        if(start > end) {
            return "";
        }
        
        vector<string> words;
        stringstream ss(s.substr(start, end - start + 1));
        string word;

        while(ss >> word) {
            words.push_back(word);
        }

        reverse(words.begin(), words.end());
          string result;
        for (int i = 0; i < words.size(); i++) {
            result += words[i];
            if (i < words.size() - 1) {
                result += " ";
            }
        }

        return result;

        
    }
};