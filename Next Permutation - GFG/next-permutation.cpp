//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> nextPermutation(int n, vector<int> arr){
        int index1=0,index2=0;
        for(index1 = n-2;index1>=0;index1--)
        {
            if(arr[index1] < arr[index1+1])
                break;
        }
        if(index1<0)
        {
            reverse(arr.begin(),arr.end());
            return arr;
        }
        else{
            for(index2=n-1;index2>index1;index2--)
            {
                if(arr[index2]>arr[index1])
                    break;
            }
        }
        swap(arr[index1],arr[index2]);
        reverse(arr.begin()+index1+1,arr.end());
        return arr;
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        vector<int> ans = ob.nextPermutation(N, arr);
        for(int u: ans)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends