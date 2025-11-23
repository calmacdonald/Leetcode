class Solution {
public:
    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x, int y, int k) {
        int xs = x;
        int ys = y;      
        int xf = x + k - 1;    
        int yf = y + k - 1; 

        while (xs < xf) {
            for (int col = ys; col <= yf; col++) {
                swap(grid[xs][col], grid[xf][col]);
            }
            xs++;
            xf--;
        }
        return grid;
    }
};