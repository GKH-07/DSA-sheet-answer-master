class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) 
    {
        int sum=0;
        int n = mat[0].size();
        int pri=0;
        int sec=0;
        for(int i=0;i<n;i++)
        {
            pri = i;
            sec = n-i-1;
            cout<< pri << pri << " - "<<sec <<sec <<endl; 
            sum += mat[pri][pri];
            sum += mat[sec][pri]; 
        }
        if(n%2!=0){return sum - mat[n/2][n/2];}
        return sum;
    }
};