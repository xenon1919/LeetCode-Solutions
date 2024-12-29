class Solution {
public:
    vector<string> removeComments(vector<string>& source) {
        vector<string> result;
        bool inblockComment = false;
        string currentLine;

        for(const string& line : source) {
            int i = 0;
            if(!inblockComment) {
                currentLine.clear();
            }

                while(i < line.size()) {
                    if(!inblockComment && i + 1 < line.size() && line[i] == '/' && line[i + 1] == '*') {
                        inblockComment = true;
                        i += 2;
                    }

                    else if(inblockComment && i + 1 < line.size() && line[i] == '*' && line[i + 1] == '/') {
                        inblockComment = false;
                        i += 2;
                    }

                    else if(!inblockComment && i + 1 < line.size() && line[i] == '/' && line[i + 1] == '/') {
                        break;
                    }

                    else if(!inblockComment) {
                        currentLine += line[i++];
                    }

                    else {
                        i++;
                    }
                }

                if(!inblockComment && !currentLine.empty()) {
                    result.push_back(currentLine);
                }
            }

          return result;
        
    }
};