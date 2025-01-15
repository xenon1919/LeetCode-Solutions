class Solution {
public:
    string freqAlphabets(string s) {
        string result;
        int n = s.size();

        for(int i = n - 1; i >= 0;) {
            if(s[i] =='#') {
            int num = stoi(s.substr(i - 2, 2));
            result += (char)(num - 1 + 'a');
            i -= 3;
            }
        else {
            int num = s[i] - '0';
            result += (char)(num - 1 + 'a');
            i--;
        }
        }

        reverse(result.begin(), result.end());
        return result;

        
    }
};