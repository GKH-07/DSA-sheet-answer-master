//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    string longestPalindrome(string s){
        // code here 
        int n = s.length();
        int high = 0;
        int low  = 0;
        int start= 0;
        int maxlength=1;
        for(int i=0;i<n;i++)
        {
            // chcecking fo even length substring
            low = i-1;
            high= i;
            while(low>=0 && high <n && s[low] == s[high])
            {
                if(high-low+1 >maxlength)
                {
                    start = low;
                    maxlength = high-low+1;
                }
                low--;
                high++;
            }
            // odd length substring;
            low=i-1;
            high=i+1;
            while(low>=0&&high<n&&s[low]==s[high])
            {
                if(high-low+1>maxlength)
                {
                    start=low;
                    maxlength=high-low+1;
                }
                low--;
                high++;
            }
        }
        string ans="";
        for(int i=start;i<start+maxlength;i++)
        {
            ans+=s[i];
        }
        return ans;
    }
};

//{ Driver Code Starts.



int main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        Solution ob;
        cout<<ob.longestPalindrome(S)<<endl;
    }
    return 0;
}

// } Driver Code Ends