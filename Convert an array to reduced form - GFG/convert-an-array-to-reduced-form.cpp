//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Converts arr[0..n-1] to reduced form.
	void convert(int arr[], int n) {
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        a[i] = arr[i];
	    }
	    sort(a,a+n);
	    map<int,int> m;
	    int v=0;
	    for(int i=0;i<n;i++)
	    {
	        m[a[i]] = v++;
	    }
	    for(int i=0;i<n;i++)
	    {
	        arr[i] = m[arr[i]];
	    }
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.convert(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends