class Solution {
public:
    int minTimeToType(string word) {
        int time = 0;
        char curr = 'a'; 

        for (char ch : word) {
            int distance = min(abs(ch - curr), 26 - abs(ch - curr));
            time += distance + 1;
            curr = ch; 
        }

        return time;
    }
};
