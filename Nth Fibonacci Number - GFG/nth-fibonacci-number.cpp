//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
   long long int mod = 1e9 + 7;
//     long long int  solve(long long int n,vector<long long int> &dp)
//     {
//         if(n == 0 || n == 1)
//             return n%mod;
//         if(dp[n] != -1)
//             return dp[n] % mod;
//         dp[n] = solve(n-1,dp)%mod + solve(n-2,dp)%mod;
//         return dp[n]%mod;
        
        
//     }
//     long long int nthFibonacci(long long int n){
//       vector<long long int> dp(n+1,-1);
//       return solve(n,dp);
//     }
    long long int nthFibonacci(long long int n)
    {
        vector<long long int> dp(n+1,-1);
        dp[0] = 0;
        dp[1] = 1;
        for(int i=2;i<=n;i++)
        {
            dp[i] = dp[i-1]%mod + dp[i-2]%mod;
            
        }
        return dp[n]%mod;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}

// } Driver Code Ends