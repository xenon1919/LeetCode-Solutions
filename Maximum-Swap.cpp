class Solution {
public:
    int maximumSwap(int num) {
        
        string strNum = to_string(num);

        vector<int> last(10, -1);

        for(int i = 0; i < strNum.size(); i++) {
            last[strNum[i] - '0'] = i;
        }

        for(int i = 0; i < strNum.size(); i++) {

            for(int digit = 9; digit > strNum[i] - '0'; digit--) {
                if(last[digit] > i) {
                    swap(strNum[i], strNum[last[digit]]);

                    return stoi(strNum);
                }
            }

        }

        return num;
    }
};