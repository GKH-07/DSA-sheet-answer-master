//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string A){
		    // Code here
		    unordered_map<char, int> count;
        queue<char> nonRepeatingChars;
        string result;
    
        for (char c : A) {
            count[c]++;
            if (count[c] == 1)
                nonRepeatingChars.push(c);
    
            while (!nonRepeatingChars.empty() && count[nonRepeatingChars.front()] > 1)
                nonRepeatingChars.pop();
    
            if (nonRepeatingChars.empty())
                result += '#';
            else
                result += nonRepeatingChars.front();
        }
    
        return result;
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends