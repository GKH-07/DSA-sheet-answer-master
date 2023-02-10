class Solution {
public:
void dfs(int node,vector<int> adjlist[], vector<bool> &vis)
{
   // vis[node] = true;
    for(auto neighbour : adjlist[node])
    {
        if(vis[neighbour] == false)
        {
        vis[neighbour] = true;
        dfs(neighbour,adjlist,vis);
        }
    }
}
    int findCircleNum(vector<vector<int>>& isConnected) {
        int V = isConnected.size();
        vector<int> adjlist[V];
        for(int i=0;i<V;i++)
        {
            for(int j=0;j<V;j++)
            {
                if(isConnected[i][j] == 1)
                {
                    adjlist[i].push_back(j);
                    adjlist[j].push_back(i);
                    
                }
            }
        }
        vector<bool> vis(V,0);
        int count=0;
        for(int i=0;i<V;i++)
        {
            if(!vis[i])
            {
                dfs(i,adjlist,vis);
                count++;
            }
        }
    return count;
    }
};