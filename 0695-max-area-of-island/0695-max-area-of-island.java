class Solution {
    public int dfs(int i, int j, int[][] grid){
        grid[i][j]=2;
        int c = 1;
        int[][] directions = {{1,0},{-1,0},{0,1},{0,-1}};
        for(int[] d : directions){
            int new_x = i+d[0];
            int new_y = j+d[1];
            if(new_x>=0 && new_x<grid.length && new_y>=0 && new_y<grid[0].length && grid[new_x][new_y]==1){
                c+=dfs(new_x, new_y, grid);
            }
        }
        return c;
    }
    public int maxAreaOfIsland(int[][] grid) {
        int max = 0;
        for(int i=0; i<grid.length; i++){
            for(int j=0; j<grid[0].length; j++){
                if(grid[i][j]==1){
                    int area = dfs(i, j, grid);
                    max = Math.max(max,area);
                }
            }
        }
        return max;
    }
}