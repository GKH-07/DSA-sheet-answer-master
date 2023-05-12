class Solution {
public:
    vector<vector<int>> generateMatrix(int n) 
    {
        int index = 1;
        vector<vector<int>> v(n,vector(n,-1));
        int rowstart=0;
        int rowend  =n-1;
        int colstart=0;
        int colend=n-1;
        while(rowstart <= rowend && colstart <= colend)
        {
            for(int i=colstart;i<=colend;i++)
            {
                v[rowstart][i] =index++;
            }
            rowstart++;
            for(int i=rowstart;i<=rowend;i++)
            {
                v[i][colend] =index++;
            }
            colend--;
            for(int i=colend;i>=colstart && rowstart <= rowend;i--)
            {
                v[rowend][i] =index++;
            }
            rowend--;
            for(int i=rowend;i>=rowstart && colstart <= colend ;i--)
            {
                
                v[i][colstart] =index++;
            }
            colstart++;
            
        }
        return v;
 
    }
};