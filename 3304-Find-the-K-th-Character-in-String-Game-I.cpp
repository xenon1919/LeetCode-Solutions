class Solution {
public:
    char kthCharacter(int k) {
        string word = "a"; 
        
        while (word.size() < k) {
            std::string nextWord = "";
            for (char c : word) {
                
                nextWord += (c == 'z') ? 'a' : c + 1;
            }
            word += nextWord;  
        }
        
        return word[k - 1];  
    }
};
