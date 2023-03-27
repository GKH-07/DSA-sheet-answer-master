class Solution {
public:
    void dfs(vector<vector<int>>& image, int row, int col,int curr,int newcolor,int n,int m)
    {
        if(row < 0 || row>=n || col <0 || col>=m || image[row][col] != curr || image[row][col] == newcolor)
            return ;
        
        image[row][col] = newcolor;
        int rowdir[4] = {-1,1,0,0};
        int coldir[4] = {0,0,-1,1};
            for(int j=0;j<4;j++)
            {
                dfs(image,row+rowdir[j],col+coldir[j],curr,newcolor,n,m);
            }
        
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color)
    {
        int val = image[sr][sc];
        int n = image.size();
        int m = image[0].size();
        dfs(image,sr,sc,val,color,n,m);
        return image;
    }
};