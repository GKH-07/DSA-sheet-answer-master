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
            adj[edg[0]].push_back({edg[1], edg[2]});
            adj[edg[1]].push_back({edg[0], edg[2]});
        }

        return dfs(1, adj, vis);
    }
};