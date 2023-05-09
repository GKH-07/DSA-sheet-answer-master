//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        int n=matrix.size();
        int m=matrix[0].size();
        int rowstart = 0;
        int colstart = 0;
        int rowend = n-1;
        int colend = m-1;
        vector<int> ans;
        while(rowstart <= rowend && colstart <= colend)
        {
            for(int i=colstart;i<=colend;i++)
            {
                //cout << matrix[rowstart][i] <<" - ";
                ans.push_back(matrix[rowstart][i]);
            }
            rowstart++;
            //cout<<endl;
            for(int i=rowstart;i<=rowend;i++)
            {
               // cout<<matrix[i][colend]<<" - ";
                ans.push_back(matrix[i][colend]);
            }
            colend--;
           // cout<<endl;
            for(int i=colend;i>=colstart && rowstart <= rowend ;i--)
            {
               // cout<<matrix[rowend][i]<<" - ";
                ans.push_back(matrix[rowend][i]);
            }
            rowend--;
            //cout<<endl;
            for(int i=rowend;i>=rowstart && colstart <= colend ;i--)
            {
                //cout<<matrix[i][colstart]<<" - ";
                ans.push_back(matrix[i][colstart]);
            }
            colstart++;
           // cout<<endl;
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends