class Solution {
public:

    bool isFreqSame(int freq1[], int freq2[0]) {
        for(int i = 0; i < 26; i++) {
            if(freq1[i] != freq2[i]) {
                return false;
            }
        }

        return true;
    }
    bool checkInclusion(string s1, string s2) {
        int freq[26] = {0};
        for(int i = 0; i < s1.size(); i++) {
            freq[s1[i] - 'a']++;
        }

        int windowSize = s1.size();
        for(int i = 0; i < s2.size(); i++) {
            int windowIndex =  0;
            int index = i;
            int windowFreq[26] = {0};
            while(windowIndex < windowSize && index < s2.size()) {
                windowFreq[s2[index] -'a']++;
                windowIndex++;
                index++;
            }

            if(isFreqSame(freq, windowFreq)) {
                return true;
            }
        }

        return false;
        
    }
};