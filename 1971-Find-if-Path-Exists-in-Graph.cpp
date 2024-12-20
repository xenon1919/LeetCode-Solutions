class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        if(source == destination) {
            return true;
        }
        unordered_map<int, vector<int>> graph;
        for(const auto& edge : edges) {
            graph[edge[0]].push_back(edge[1]);
            graph[edge[1]].push_back(edge[0]);
        }
        
        queue<int> q;
        vector<bool> visited(n, false);
        q.push(source);
        visited[source] = true;
        
        while(!q.empty()) {
            int node = q.front();
            q.pop();
            
            for(int neighbor : graph[node]) {
                if(!visited[neighbor]) {
                    if(neighbor == destination) {
                        return true;
                    }
                    q.push(neighbor);
                    visited[neighbor] = true;
                }
            }
        }
        return false;
    }
};