class Solution {
public:
    int fib(int n) {
        int dp[n+1];//={0};
        memset(dp,-1,sizeof(dp));
        
        if(n==0 || n==1)
            return n;
        
        if(dp[n] != -1)
        {
            return dp[n];
        }
        
        dp[n] =  fib(n-1) + fib(n-2);
        return dp[n];
    }
};