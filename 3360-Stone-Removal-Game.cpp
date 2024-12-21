class Solution {
public:
    bool canAliceWin(int n) {
        int stonesToRemove = 10; 
        bool isAliceTurn = true; 
        
        while (n > 0) {
            if (n < stonesToRemove) {
                return !isAliceTurn;
            }
            n -= stonesToRemove;
            stonesToRemove--; 
            isAliceTurn = !isAliceTurn; 
        }
        
        return !isAliceTurn; 
    }
};
