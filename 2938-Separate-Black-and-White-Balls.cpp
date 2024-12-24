class Solution {
public:
    long long minimumSteps(string s) {
    long minSteps = 0;  
    int left = 0; 
    int right = s.length() - 1; 

    while (left < right) {  
        if (s[left] == '1') {  
            if (s[right] == '0') {  
                minSteps += (right - left); 
                left++; 
            }  
            right--;
        } else {  
            if (s[right] == '1') {  
                right--; 
            }  
            left++;
        }  
    }  
    
    return minSteps;
        
    }
};