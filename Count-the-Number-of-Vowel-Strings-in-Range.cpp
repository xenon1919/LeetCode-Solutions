class Solution {
public:
    bool isVowel(char c) {
    return string("aeiou").find(c) != string::npos;
}

int vowelStrings(vector<string>& words, int left, int right) {
    int count = 0;
    for (int i = left; i <= right; i++) {
        if (isVowel(words[i][0]) && isVowel(words[i].back()))
            count++;
    }
    return count;
}

};