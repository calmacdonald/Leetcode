class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size(), n = matrix[0].size(), l = 0, r = m * n - 1;
        while (l < r){
            int mid = (r + l - 1) / 2;
            if (matrix[mid / n][mid % n] < target) l = mid + 1;
            else r = mid;
        }
        return matrix[r / n][r % n] == target;
    }
};