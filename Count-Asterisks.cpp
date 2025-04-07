class Solution {
public:
  int countAsterisks(string s) {
    int count = 0;
    bool insideBar = false;

    for (char c : s) {
        if (c == '|') {
            insideBar = !insideBar; 
        } else if (!insideBar && c == '*') {
            count++;
        }
    }

    return count;
}

};