class Solution {
public:
    bool isGoodArray(vector<int>& nums) {
        int g = nums[0];
        for (int i = 1; i < nums.size(); ++i)
            while (nums[i] != 0) {
            int t = nums[i];
            nums[i] = g % nums[i];
            g = t;
        }
        return g == 1;
    }
};