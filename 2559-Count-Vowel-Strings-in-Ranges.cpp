
class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        int n = words.size();
        vector<int> valid_count(n, 0);
        
     
        string vowels = "aeiou";
        
     
        valid_count[0] = (isVowel(words[0][0]) && isVowel(words[0].back())) ? 1 : 0;
        for (int i = 1; i < n; ++i) {
            valid_count[i] = valid_count[i - 1] + (isVowel(words[i][0]) && isVowel(words[i].back()));
        }
        
  
        vector<int> result;
        for (auto& query : queries) {
            int li = query[0], ri = query[1];
            if (li == 0) {
                result.push_back(valid_count[ri]);
            } else {
                result.push_back(valid_count[ri] - valid_count[li - 1]);
            }
        }
        
        return result;
    }
    
private:

    bool isVowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }
};
