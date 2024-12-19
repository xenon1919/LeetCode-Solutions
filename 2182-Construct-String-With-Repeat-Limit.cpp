class Solution {
public:
    string repeatLimitedString(string s, int repeatLimit) {
     
        map<char, int> freq;
        for (char c : s) {
            freq[c]++;
        }
        
     
        priority_queue<pair<char, int>> maxHeap;
        for (auto it : freq) {
            maxHeap.push({it.first, it.second});
        }
        
        string result = "";
        
        while (!maxHeap.empty()) {
   
            auto [currChar, currFreq] = maxHeap.top();
            maxHeap.pop();
            
            
            int timesToAdd = min(repeatLimit, currFreq);
          
            result.append(timesToAdd, currChar);
            currFreq -= timesToAdd;
            
            if (currFreq > 0) { 
                if (maxHeap.empty()) break;
                
         
                auto [nextChar, nextFreq] = maxHeap.top();
                maxHeap.pop();
                
              
                result += nextChar;
                nextFreq--;
                
                
                if (nextFreq > 0) {
                    maxHeap.push({nextChar, nextFreq});
                }
                maxHeap.push({currChar, currFreq});
            }
        }
        
        return result;
    }
};
