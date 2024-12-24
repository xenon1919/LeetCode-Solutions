class Solution {
public:
    int possibleStringCount(string word) {
        int totalCount = 1; 
        
        int n = word.length();
        int i = 0;

       
        while (i < n) {
            char currentChar = word[i];
            int currentCount = 0;

            
            while (i < n && word[i] == currentChar) {
                currentCount++;
                i++;
            }

       
            if (currentCount > 1) {
                totalCount += currentCount - 1; 
            }
        }

        return totalCount; 
    }
};
