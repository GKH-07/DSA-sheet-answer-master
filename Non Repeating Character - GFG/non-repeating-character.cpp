//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    char nonrepeatingCharacter(string S)
    {
        unordered_map<char,int> m;
        for(int i=0;i<S.length();i++)
        {
            m[S[i]]++;
        }
        for(int i=0;i<S.length();i++)
        {
            if(m[S[i]] == 1)
            {
                return S[i];
            }
        }
         return '$';
    }

};

//{ Driver Code Starts.

int main() {
	
	int T;
	cin >> T;
	
	while(T--)
	{
	
	    string S;
	    cin >> S;
	    Solution obj;
        char ans = obj.nonrepeatingCharacter(S);
        
        if(ans != '$')
	    cout << ans;
        else cout << "-1";
            
        cout << endl;
	    
	}
	
	return 0;
}

// } Driver Code Ends