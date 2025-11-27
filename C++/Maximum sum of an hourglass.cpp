class Solution {
public:
    int maxSum(vector<vector<int>>& grid) {
        int hourglass_max_sum=INT_MIN;
        for(int row=0, rows=grid.size(); row<rows-2; row++)
        {
            for(int column=0, columns=grid[0].size(); column<columns-2; column++)
            {
                hourglass_max_sum=max(grid[row][column]+grid[row][column+1]+grid[row][column+2]+grid[row+1][column+1]
                                    +grid[row+2][column]+grid[row+2][column+1]+grid[row+2][column+2],
                hourglass_max_sum);
            }
        }

        return hourglass_max_sum;
    }
};