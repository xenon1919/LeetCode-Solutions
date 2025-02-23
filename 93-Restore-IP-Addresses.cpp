


class Solution { public: vector<string> restoreIpAddresses(string s) { vector<string> result; string current; backtrack(s, 0, 0, current, result); return result; }

private: void backtrack(const string& s, int start, int part, string current, vector<string>& result) { if (part == 4 && start == s.size()) { result.push_back(current); return; } if (part == 4 || start == s.size()) return;

for (int len = 1; len <= 3; ++len) {

        if (start + len > s.size()) break;

        string segment = s.substr(start, len);

        if (isValid(segment)) {

            backtrack(s, start + len, part + 1, current + (part ? "." : "") + segment, result);

        }

    }

}

bool isValid(const string& segment) {

    if (segment.size() > 1 && segment[0] == '0') return false;

    int num = stoi(segment);

    return num >= 0 && num <= 255;

}

};


        
    
