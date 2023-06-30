//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
		
	int isDivisible(string s){
	    //binary number me humare pass do positions h odd and even
	    // odd and even position me 3 ke divisble hote h
	    // second 3 odd ya 3 even ka combination bhi 3 se divisble hota hai
	    // to phle 2 wle pair nikal denge saare,no of odd - no of even => unka pair bn jaega
	    // ab jo extra honge agr wo 3 ke pair me honge to total number 3 se divisible hoga
	    
	    int odd=0;
	    int even=0;
	    int n = s.size();
	    for(int i=0;i<n;i++)
	    {
	        if(s[i]=='1')
	        {
	            if(i%2==0)even++;
	            else odd++;
	        }
	    }
	    return (odd-even)%3 == 0;
	}

};

//{ Driver Code Starts.
int main(){
    
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        Solution ob;
        cout << ob.isDivisible(s) << endl;
    }
return 0;
}


// } Driver Code Ends