//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int equilibriumPoint(long long a[], int n) {
     
     long long int  left = 0, right = 0;
        for(long long int x=0;x<n;x++) right += a[x];
        for(long long int i = 0; i < n; left += a[i], right -= a[i], i++) 
        {
            if(left == right - a[i]) 
                return i+1;
        }
            
        return -1;
    }
};

//{ Driver Code Starts.


int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends