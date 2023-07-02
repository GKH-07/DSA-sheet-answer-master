//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution{
    public:
    int setSetBit(int x, int y, int l, int r){
        // code here
        int mask = 1;
        mask = (1 << (r-l+1));
        // isse r ke turnt agla bit 1 ho jaega
        // baaki zero and ab baaki left wlo ko one banane ke liye one minus krna hoga
        mask--;
        // left range se ohle wle bhi one ho gae h unhe bi zero krna h
        mask = (mask << (l-1));
        mask = mask & y;
        x = x | mask;
        
        return x;
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int x, y, l, r;
        cin>>x>>y>>l>>r;
        
        Solution ob;
        cout<<ob.setSetBit(x, y, l, r)<<"\n";
    }
    return 0;
}
// } Driver Code Ends