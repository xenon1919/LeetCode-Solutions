class Solution {
public:
    string sortSentence(string s) {
        vector<string> words(10);          
        string word;
        for (int i = 0; i < s.length(); ++i) {
            if (s[i] == ' ') {
                int pos = word.back() - '0';   
                word.pop_back();              
                words[pos - 1] = word;
                word = "";
            } else {
                word += s[i];
            }
        }
        
        int pos = word.back() - '0';
        word.pop_back();
        words[pos - 1] = word;

        string result;
        for (string w : words) {
            if (w != "") result += w + " ";
        }
        result.pop_back();     
        return result;
    }
};
