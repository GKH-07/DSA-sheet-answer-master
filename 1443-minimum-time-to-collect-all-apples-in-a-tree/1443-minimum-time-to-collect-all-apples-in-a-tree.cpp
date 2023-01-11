class Solution {
public:
    
    vector<vector<int>> adj;
    int dfs(vector<bool>& hasApple,int curr,int parent,int dis)
    {
        int disFromChild = 0;
        int disFromRoot = 0;
        for(auto x:adj[curr])
        {
            // check only for children if they have apple present ot not
            if(x!=parent)
            {
                disFromRoot = dfs(hasApple,x,curr,dis+1);
            }
            //if disfromroot != 0 means children have apple
            //so cal the dis from x,i.e current node to the children
            if(disFromRoot != 0)
            {
                disFromChild += disFromRoot - dis;
            }
            
        }
        return disFromChild || hasApple[curr] ? disFromChild+dis : 0;
    }
    int minTime(int n, vector<vector<int>>& edges, vector<bool>& hasApple)
    {
        adj.resize(n);
        for(auto x:edges)
        {
            adj[x[0]].push_back(x[1]);
            adj[x[1]].push_back(x[0]);
            
        }
        // current node=0,parent = -1,distance or level from root
        return dfs(hasApple,0,-1,0)*2;
    }
}; 