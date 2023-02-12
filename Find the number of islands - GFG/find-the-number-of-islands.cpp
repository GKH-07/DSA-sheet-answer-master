//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
//   void bfs(vector<vector<char>>& grid,vector<vector<int>> &vis,int row,int col)
//   {
//       vis[row][col] = 1;
//       queue<pair<int,int>> q;
//       q.push({row,col});
//       int n = grid.size();
//       int m = grid[0].size();
//       while(!q.empty())
//       {
//           int row = q.front().first;
//           int col = q.front().second;
//           q.pop();
//           // there is 8 dierction 
//           for(int rowdir = -1;rowdir <= 1;rowdir++)
//           {
//               for(int coldir = -1;coldir <= 1;coldir++)
//               {
//                 int newrow = row + rowdir;
//                 int newcol = col + coldir;
//                 if(newrow >= 0 && newrow < n && newcol >=0 && newcol<m && grid[newrow][newcol] == '1' && vis[newrow][newcol] == 0)
//                 {
//                     vis[newrow][newcol] = 1;
//                     q.push({newrow,newcol});
//                 }
//               }
//           }
//       }
      
//   }
int rowdir[8] = {0, 0, -1, 1, -1, 1, 1, -1};
int coldir[8] = {1, -1, 0, 0, 1, -1, 1, -1};
  void dfs(vector<vector<char>>& grid,vector<vector<int>> &vis,int row,int col)
  {
       
       
      int n = grid.size();
      int m = grid[0].size();
      if(row<0 || col<0 || row>=n || col>=m ||  grid[row][col] != '1' || vis[row][col] == 1)
      {
          return;
      }
      vis[row][col] = 1;
        for(int k=0;k<8;k++)
          {
             dfs(grid,vis,row+rowdir[k],col+coldir[k]);
          }
}
    // Function to find the number of islands.
    int numIslands(vector<vector<char>>& grid) {
       int n= grid.size();
       int m = grid[0].size();
       
       vector<vector<int>> vis(n,vector<int>(m,0));
       int count=0;
       
       for(int row=0;row<n;row++)
       {
           for(int col=0;col<m;col++)
           {
               if(vis[row][col] == 0 && grid[row][col] == '1')
               {
                   count++;
                   // by bfs
                   //bfs(grid,vis,row,col);
                   // by dfs
                   dfs(grid,vis,row,col);
               }
           }
       }
       return count;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.numIslands(grid);
        cout << ans << '\n';
    }
    return 0;
}
// } Driver Code Ends