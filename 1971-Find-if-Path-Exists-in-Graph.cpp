class Solution {
public:
    int find(vector<int>& parent, int node) {
        if (parent[node] != node) {
            parent[node] = find(parent, parent[node]); 
        }
        return parent[node];
    }

    void unite(vector<int>& parent, vector<int>& rank, int u, int v) {
        int rootU = find(parent, u);
        int rootV = find(parent, v);

        if (rootU != rootV) {
            if (rank[rootU] > rank[rootV]) {
                parent[rootV] = rootU;
            } else if (rank[rootU] < rank[rootV]) {
                parent[rootU] = rootV;
            } else {
                parent[rootV] = rootU;
                rank[rootU]++;
            }
        }
    }

    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<int> parent(n), rank(n, 0);

      
        for (int i = 0; i < n; ++i) {
            parent[i] = i;
        }

       
        for (const auto& edge : edges) {
            unite(parent, rank, edge[0], edge[1]);
        }

        return find(parent, source) == find(parent, destination);
    }
};
