#include <vector>
#include <string>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        unordered_map<char, int> maxFreq;
        

        auto countFrequency = [](const string& word) {
            unordered_map<char, int> freq;
            for (char c : word) {
                freq[c]++;
            }
            return freq;
        };

        for (const string& word : words2) {
            unordered_map<char, int> freq = countFrequency(word);
            for (auto& [ch, count] : freq) {
                maxFreq[ch] = max(maxFreq[ch], count);
            }
        }

        vector<string> result;
        for (const string& word : words1) {
            unordered_map<char, int> freq = countFrequency(word);
            bool isUniversal = true;
            for (auto& [ch, count] : maxFreq) {
                if (freq[ch] < count) {
                    isUniversal = false;
                    break;
                }
            }
            if (isUniversal) {
                result.push_back(word);
            }
        }
        
        return result;
    }
};
