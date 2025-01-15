class Solution {
public:
    vector<string> removeSubfolders(vector<string>& folder) {
        sort(folder.begin(), folder.end());
        vector<string> result;
        string lastMainFolder = "";

        for(const string& f : folder) {
            if(lastMainFolder.empty() || f.find(lastMainFolder + "/") != 0) {
                result.push_back(f);
                lastMainFolder = f;
            }
        }

        return result;
        
    }
};