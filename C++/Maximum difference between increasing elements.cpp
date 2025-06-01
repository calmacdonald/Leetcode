class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int maxDiff = 0, minNum = nums[0];

        for (int i = 0; i < nums.size(); i++){
            maxDiff = max(maxDiff, nums[i] - minNum);
            minNum = min(minNum, nums[i]);
        }

        if (maxDiff > 0){
            return maxDiff;
        }

        else{
            return -1;
        }
    }
};