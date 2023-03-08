class Solution {
public:
    int solve(int m,int n,int i,int j,vector<vector<int>> &dp,vector<vector<int>>& obs)
    {
        // if( i>=0 && j>=0 && dp[i][j] == 1)
        //     return 0;
        
                
        if(i>=m || j>=n || obs[i][j]==1 || i<0 ||j<0)
            return 0;
        
        
        if(i==m-1 && j==n-1)
        {
            return 1;
        }
        // if(i>=m || j>=n)
        // {
        //     return 0;
        // }
        
        

        
        if(dp[i][j] != -1)
            return dp[i][j];

        int down = solve(m,n,i+1,j,dp,obs);
        int right= solve(m,n,i,j+1,dp,obs);
        
        return dp[i][j] = down+right;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        vector<vector<int>> dp(101, vector<int>(101,-1));
         return solve(m,n,0,0,dp,obstacleGrid);
    }
};