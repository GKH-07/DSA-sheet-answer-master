//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    string removeKdigits(string s, int k) {
        stack<char> st;
        int n = s.size();
        for(char c:s)
        {
            while(!st.empty() && k>0 && st.top() > c)
            {
                st.pop();
                k--;
            }
            if(!st.empty() || c!='0')
            {
                st.push(c);
            }
        }
         while(!st.empty() && k--)
        {
            st.pop();
        }
        if(st.empty())return "0";
        string result;
        while(!st.empty())
        {
            result.push_back(st.top());
            st.pop();
        }
        reverse(result.begin(),result.end());
        return result;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        int K;
        cin >> K;
        Solution obj;
        cout << obj.removeKdigits(S, K) << endl;
    }
    return 0;
}

// } Driver Code Ends