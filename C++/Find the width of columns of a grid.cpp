class Solution {
public:
    vector<int> findColumnWidth(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        vector<int> ans;
        for(int i=0;i<n;i++){
            int len = 0;
            for(int j=0;j<m;j++){
                string s = to_string(grid[j][i]);
                int l = s.size();
                len = max(len, l);
            }
            ans.push_back(len);
        }
        return ans;
    }
};