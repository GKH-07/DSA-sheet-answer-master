//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string longestPalin (string s) 
    {
         string result="";
         int high;
         int low=0;
         int start=0;
         int maxlength=1;
         int n = s.size();
         for(int i=1;i<n;i++)
         {
             // abba-even length
             low = i-1;
             high= i;
             while(low>=0 && high<n && s[low] == s[high])
             {
                 if(maxlength < high - low+1)
                 {
                     start = low;
                     maxlength=high-low+1;
                 }
                 low--;
                 high++;
             }
             low = i-1;
             high= i+1;
             while(low>=0 && high<n && s[low] == s[high])
             {
                 if(maxlength < high - low+1)
                 {
                     start = low;
                     maxlength=high-low+1;
                 }
                 low--;
                 high++;
             }
             
         }
         for(int i=start;i<start+maxlength;i++)
         {
             result += s[i];
         }
         return result;
    }
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;
        
        Solution ob;
        cout << ob.longestPalin (S) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends