class Solution {
public:
    int vis[301][301] ={0};
    bool check(vector<vector<char>>& grid,int i,int j,int m,int n){
        // base case
        if(i<0 or j<0 or i>=m or j>=n or grid[i][j]=='0') return true;
        // check if the index is alredy visited
        if(vis[i][j]==1)return true;
        // mark visited for "1"s
        vis[i][j]=1;
        bool u = check(grid,i-1,j,m,n); 
        bool d = check(grid,i+1,j,m,n); 
        bool r = check(grid,i,j-1,m,n); 
        bool l = check(grid,i,j+1,m,n); 
        if(u && d && r && l) return true;
        return false;
    }
    int numIslands(vector<vector<char>>& grid) {
        int  count =0;
        int m = grid.size();
        int n = grid[0].size();
        for(int i =0;i<m;i++){
            for(int j=0;j<n;j++){
                // check if index is not the part of any island(i.e. not visited) 
                // check if index is not water
                if(vis[i][j]==0 and grid[i][j] == '1'){
                    bool ans = check(grid,i,j,m,n);
                    // count 
                    if(ans) count++;
                }
            }
        }
        return count;
    }
};