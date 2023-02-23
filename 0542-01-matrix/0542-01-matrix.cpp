class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
	    vector<vector<int>>dis(n,vector<int>(m,0));
	    queue< pair< pair<int,int> , int> > q;

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j] == 0)
                {
                    vis[i][j] =1;
                    q.push({{i,j},0});
                }
            }
        }
        int rowdir[4] = {-1,0,1,0};
	    int coldir[4] = {0,1,0,-1};
	    while(!q.empty())
	    {
	        int row = q.front().first.first;
	        int col = q.front().first.second;
	        int step= q.front().second;
	        q.pop();
	        dis[row][col] = step;
	        for(int i=0;i<4;i++)
	        {
	            int neighbourRow = row + rowdir[i];
	            int neighbourCol = col + coldir[i];
	            if(neighbourRow >= 0 && neighbourRow < n && neighbourCol >=0 && neighbourCol < m && vis[neighbourRow][neighbourCol] == 0)
	            {
	                vis[neighbourRow][neighbourCol] = 1;
	                q.push({{neighbourRow,neighbourCol},step+1});
	            }
	        }
	        
	    }
	    return dis;
    }
};