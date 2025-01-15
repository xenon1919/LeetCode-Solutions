class Solution {
public:
    string reformat(string s) {
        vector<char> letters; 
        vector<char> digits;  
        
        
        for (char ch : s) {
            if (isalpha(ch)) {
                letters.push_back(ch); 
            } else {
                digits.push_back(ch); 
            }
        }
        
        int lCount = letters.size(); 
        int dCount = digits.size();  
        
        if (abs(lCount - dCount) > 1) {
            return "";
        }
        
        string result;  
        int i = 0, j = 0;
        
        
        while (i < lCount || j < dCount) {
            if (lCount >= dCount) {
                if (i < lCount) result += letters[i++]; 
                if (j < dCount) result += digits[j++];   
            } else {
                if (j < dCount) result += digits[j++];   
                if (i < lCount) result += letters[i++]; 
            }
        }
        
        return result;  
    }
};
