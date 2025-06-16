class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int>& nums) {
        int l[51] = {0}, r[51] = {0}, n = nums.size(), left = 0, right = 0;
        for (int num : nums){
            if(++r[num] == 1) ++right;
        }
        for(int i = 0; i < n; ++i){
            if(++l[nums[i]] == 1) ++left;
            if(--r[nums[i]] == 0) --right;
            nums[i] = left - right;
        }
        return nums;
    }
};