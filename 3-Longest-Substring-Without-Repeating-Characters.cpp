#include <unordered_set>

#include <string>

class Solution {

public:

    int lengthOfLongestSubstring(std::string s) {

        std::unordered_set<char> charSet;

        int maxLength = 0;

        int left = 0;

        

        for (int right = 0; right < s.length(); right++) {

            // If character is already in set, remove from left

            while (charSet.find(s[right]) != charSet.end()) {

                charSet.erase(s[left]);

                left++;

            }

            

            // Insert new character and update max length

            charSet.insert(s[right]);

            maxLength = std::max(maxLength, right - left + 1);

        }

        

        return maxLength;

    }

};