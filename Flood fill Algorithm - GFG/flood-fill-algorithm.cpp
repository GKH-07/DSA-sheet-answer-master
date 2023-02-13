//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    void dfs(vector<vector<int>>& image,int row,int col,int curr,int newColor)
    {
        if(row<0 || col <0 || row>=image.size() || col>=image[0].size() || image[row][col] == newColor || image[row][col] != curr)
        {
            return;
            
        }
        image[row][col] =  newColor;
        int rowdir[4] = {-1,1,0,0};
        int coldir[4] = {0,0,1,-1};
        for(int i=0;i<4;i++)
        {
            dfs(image,row+rowdir[i],col+coldir[i],curr,newColor);
        }
        
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int start = image[sr][sc];
        dfs(image,sr,sc,start,newColor);
        return image;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>image(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cin >> image[i][j];
		}
		int sr, sc, newColor;
		cin >> sr >> sc >> newColor;
		Solution obj;
		vector<vector<int>> ans = obj.floodFill(image, sr, sc, newColor);
		for(auto i: ans){
			for(auto j: i)
				cout << j << " ";
			cout << "\n";
		}
	}
	return 0;
}
// } Driver Code Ends