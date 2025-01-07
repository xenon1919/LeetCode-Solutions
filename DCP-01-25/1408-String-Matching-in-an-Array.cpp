#include <vector>  
#include <string>  
#include <unordered_set>  
using namespace std;  

class Solution {  
public:  
    vector<string> stringMatching(vector<string>& words) {  
        unordered_set<string> substrings;  
        int n = words.size();  
        
       
        for (int i = 0; i < n; ++i) {  
            for (int j = 0; j < n; ++j) {  
                if (i != j && words[j].find(words[i]) != string::npos) {  
                    substrings.insert(words[i]);
                }  
            }  
        }  
        
        return vector<string>(substrings.begin(), substrings.end());  
    }  
};