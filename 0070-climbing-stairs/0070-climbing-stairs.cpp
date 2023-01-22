class Solution {
public:
    int solve(int n,vector<int>&dp)
    {
	        //if(n==0) return 1;
	        if(n==0 || n==1 || n==2 || n==3) return n;
	        
	        if(dp[n]!=-1)
	            return dp[n];
	        
	        int one  = solve(n-1,dp);
	        int two  = solve(n-2,dp);
	       
	        return dp[n]= (one +  two);
    
    }
    
    int climbStairs(int n) {
       vector<int>dp(n+1 , -1);
		return solve(n,dp);
    // int climbStairs(int n)
    // {
    //     vector<int> dp(n+10);
    //     dp[0] = 0;
    //     dp[1] = 1;
    //     dp[2] = 2;
    //     dp[3] = 3;
    //     for (int i = 4; i <= n; ++i) {
    //         dp[i] = dp[i-1] + dp[i-2];
    //     }
    //     return dp[n];
    // }
    }
};