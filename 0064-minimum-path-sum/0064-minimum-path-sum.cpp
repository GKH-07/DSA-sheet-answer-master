class Solution 
{
public:
    int solve(vector<vector<int>> &grid,int i,int j,vector<vector<int>> &dp)
    {
        if (i == 0 && j == 0) 
            return grid[i][j];
        if (i < 0 || j < 0) 
            return 1000000;
        if (dp[i][j] != -1) 
             return dp[i][j];
        int up   = grid[i][j] + solve(grid,i-1, j, dp);
        int left = grid[i][j] + solve(grid,i, j-1, dp);
        return dp[i][j] = min(up, left);
    }
    int minPathSum(vector<vector<int>>& grid) 
    {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> dp(n,vector<int>(m,-1));
        return solve(grid,n-1,m-1,dp);
    }
};
// class Solution {
// public:
//     int f(int i, int j, vector<vector<int>> &grid, vector<vector<int>> &dp) {
//         if (i == 0 && j == 0) return grid[i][j];
//         if (i < 0 || j < 0) return 1000000;
//         if (dp[i][j] != -1) return dp[i][j];
//         int up = grid[i][j] + f(i-1, j, grid, dp);
//         int left = grid[i][j] + f(i, j-1, grid, dp);
//         return dp[i][j] = min(up, left);
//     }
//     int minPathSum(vector<vector<int>>& grid) {
//         int m = grid.size();
//         int n = grid[0].size();
//         vector<vector<int>> dp(m, vector<int>(n, -1));
//         return f(m-1, n-1, grid, dp);
//     }
// };