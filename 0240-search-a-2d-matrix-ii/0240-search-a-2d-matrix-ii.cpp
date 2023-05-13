// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
//     }
// };

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.size() == 0) return false;
        int r = 0, c = matrix[0].size() - 1;
        while(r < matrix.size() && c >= 0){
            if(matrix[r][c] == target) return true;
            matrix[r][c] > target ? c-- : r++;
        }
        return false;
    }
};