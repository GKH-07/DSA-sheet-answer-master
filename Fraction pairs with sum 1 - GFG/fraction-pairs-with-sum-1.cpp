//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
    public:
    int countFractions(int n, int numerator[], int denominator[])
    {
        vector<int> num(n),den(n);
        for(int i=0;i<n;i++){
            int x=numerator[i];
            int y=denominator[i];
            int hcf=__gcd(x,y);
            x=x/hcf;
            y=y/hcf;
            num[i]=x;
            den[i]=y;
        }
        int cnt=0;
        map<pair<int, int>, int> m;
        for(int i=0;i<n;i++){
            int cx=num[i];//current x
            int cy=den[i];
            int rx=cy-cx;//required x
            int ry=cy;
            if(m.find({rx,ry})!=m.end())cnt+=m[{rx,ry}];
            m[{cx,cy}]++;
        }
        return cnt;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int numerator[n],denominator[n];
        for(int i=0;i<n;i++)
            cin>>numerator[i];
        for(int i=0;i<n;i++)
            cin>>denominator[i];
        Solution ob;
        int ans=ob.countFractions(n,numerator,denominator);
        cout<<ans<<endl;
    }
}
// } Driver Code Ends