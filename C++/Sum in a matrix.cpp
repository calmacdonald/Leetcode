class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
        int score = 0;

        for(int i = 0; i < nums.size(); i++){
            sort(nums[i].begin(), nums[i].end());
        }

        for(int j = nums[0].size() - 1; j >= 0; j--){
            int maxNum = 0;
            for(int i = 0; i < nums.size(); i++){
                maxNum = max(maxNum, nums[i][j]);
            }
            score += maxNum;
        }

        return score;
    }
};