//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int happy(int N){
        set<int> s;
        int val;
        while(1)
        {
            val = 0;
            while(N)
            {
                val += (N%10)*(N%10);
                N /= 10;
            }
            if(val == 1)
            {
                return true;
            }
            else if(s.find(val) != s.end())
            {
                return false;
            }
            s.insert(val);
            N = val;
        }
        return false;
    }
    int nextHappy(int N){
        // code here
        int ans = 0;
        for(int i = N+1;i<N+50;i++)
        {
            if(happy(i))
            {
                return i;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.nextHappy(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends