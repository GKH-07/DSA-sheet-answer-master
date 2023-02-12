class Solution {
private:
int rowdir[4] = {0,-1,0,1};
int coldir[4] = {-1,0,1,0};
void dfs(vector<vector<char>> &grid,vector<vector<int>>&vis,int row,int col)
{
    
if(row<0 || col <0 || row >= grid.size() || col >= grid[0].size() || vis[row][col] == 1 || grid[row][col] != '1')
    {
        return;
    }
    vis[row][col] = 1;
    for(int k=0;k<4;k++)
    {
        dfs(grid,vis,row + rowdir[k],col+coldir[k]);
    }
}
public:
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> vis(n,vector<int> (m,0));
        int count=0;
        for(int row=0;row<n;row++)
        {
            for(int col =0;col<m;col++)
            {
                if(vis[row][col] == 0 && grid[row][col] == '1')
                {
                    count++;
                    dfs(grid,vis,row,col); 
                }
            }
        }
        return count;
    }
};