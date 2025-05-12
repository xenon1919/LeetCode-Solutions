class Solution {
public:
    string getHint(string secret, string guess) {
        int bulls = 0, cows = 0;
        int s_count[10] = {0}, g_count[10] = {0}; // for digits 0-9

        for (int i = 0; i < secret.length(); ++i) {
            if (secret[i] == guess[i]) {
                bulls++;
            } else {
                s_count[secret[i] - '0']++;
                g_count[guess[i] - '0']++;
            }
        }

        for (int i = 0; i < 10; ++i) {
            cows += min(s_count[i], g_count[i]);
        }

        return to_string(bulls) + "A" + to_string(cows) + "B";
    }
};
