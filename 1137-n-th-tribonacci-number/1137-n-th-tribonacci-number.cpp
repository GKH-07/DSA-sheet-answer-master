class Solution {
public:
    // int dp[38];
    // memset(dp,-1,sizeof(dp[0]));
    int dp[38]={0};
    
    int tribonacci(int n)
    {
        if(n==0 || n==1)return n;
        if(n==2)return 1;
        dp[0]=0;
        dp[1]=1;
        dp[2]=1;
        if(dp[n] != 0)return dp[n];
        dp[n] =  tribonacci(n-1) + tribonacci(n-2) + tribonacci(n-3);
        return dp[n];
    }
};