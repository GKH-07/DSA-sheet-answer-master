class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix)
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
                cout << matrix[rowstart][i] <<" - ";
                ans.push_back(matrix[rowstart][i]);
            }
            rowstart++;
            cout<<endl;
            for(int i=rowstart;i<=rowend;i++)
            {
                cout<<matrix[i][colend]<<" - ";
                ans.push_back(matrix[i][colend]);
            }
            colend--;
            cout<<endl;
            for(int i=colend;i>=colstart && rowstart <= rowend ;i--)
            {
                cout<<matrix[rowend][i]<<" - ";
                ans.push_back(matrix[rowend][i]);
            }
            rowend--;
            cout<<endl;
            for(int i=rowend;i>=rowstart && colstart <= colend ;i--)
            {
                cout<<matrix[i][colstart]<<" - ";
                ans.push_back(matrix[i][colstart]);
            }
            colstart++;
            cout<<endl;
        }
        return ans;
    }
};







