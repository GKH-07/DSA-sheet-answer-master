class Solution {
public:
    int dfs(int n, vector<vector<pair<int, int>>>& adj, vector<bool>& vis) {
        int res = INT_MAX;
        vis[n] = true;
        for(auto edg: adj[n]) {
            res = min(res, edg.second);
            if(!vis[edg.first])
                res = min(res, dfs(edg.first, adj, vis));
        }
        return res;
    }

    int minScore(int n, vector<vector<int>>& roads) {
        vector<vector<pair<int, int>>> adj(n + 1);
        vector<bool> vis(n + 1);
        for(auto edg: roads) {
            int u = edg[0];
            int v = edg[1];
            int w = edg[2];
            adj[u].push_back({v,w});
            adj[v].push_back({u,w});
        }

        return dfs(1, adj, vis);
    }
};