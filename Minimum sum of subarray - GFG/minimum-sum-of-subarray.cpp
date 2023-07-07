// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	int t;cin>>t;
// 	while(t--)
// 	{
// 	    int n;cin>>n;
// 	    int arr[n];
// 	    for(int i=0;i<n;i++)cin>>arr[i];
	    
// 	}
// 	return 0;
// }
#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main() {
	//code
	int t  ;
	cin>>t ;
	for(int j = 0 ; j <t ; j++)
	{
	    int n ;
	    cin>>n ;
	    vector<int>v(n) ;
	    for(int i = 0 ; i <n ; i++) cin>>v[i] ;
	   reverse(v.begin() , v.end()) ;
	   ll mn = INT_MAX ;
	   ll sum = 0 ;
	   vector<int> sol ;
	   for(int i =0 ; i < n ; i++)
	   {
	       sum += v[i] ;
	       mn = min(mn , sum ) ;
	       sol.push_back(mn) ;
	       if(sum >=0 ) sum = 0 ;
	   }
	   for(int i = n-1 ; i >=0 ; i--)
	   {
	       cout<<sol[i] <<" " ;
	   }
	   cout<<"\n" ;
	}
	return 0;
}