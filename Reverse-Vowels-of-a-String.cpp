class Solution {
public:
    string reverseVowels(string s) {
        int start = 0, end = s.length() - 1;
        string vowels = \aeiouAEIOU\;
        
        while (start < end) {
          
            if (vowels.find(s[start]) == string::npos) {
                start++;
            }
    
            else if (vowels.find(s[end]) == string::npos) {
                end--;
            }
     
            else {
                swap(s[start], s[end]);
                start++;
                end--;
            }
        }
        
        return s;
    }
};
