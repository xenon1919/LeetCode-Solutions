class Solution {
public:
    bool checkRecord(string s) {
        int absences = 0;
        for(char c : s) {
            if(c == 'A') {
                absences++;
            }
            if(absences >= 2) {
                return false;
            }
        }

        if(s.find("LLL") != string :: npos) {
            return false;
        }

        return true;

        
    }
};