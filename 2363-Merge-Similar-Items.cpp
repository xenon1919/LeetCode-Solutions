class Solution {

public:

    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {

        unordered_map<int, int> weightMap;

        

        for (auto& item : items1) 

            weightMap[item[0]] += item[1];

        

        for (auto& item : items2) 

            weightMap[item[0]] += item[1];

        

        vector<vector<int>> result;

        for (auto& pair : weightMap) 

            result.push_back({pair.first, pair.second});

        

        sort(result.begin(), result.end());

        

        return result;

    }

};

    
