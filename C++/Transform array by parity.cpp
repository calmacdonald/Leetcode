class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        int n = nums.size(), ptr = 0;

        for (int num : nums) {
            if (num % 2 == 0) {
                nums[ptr++] = 0; }}

        for (int i = ptr; i < n; i++) {
            nums[i] = 1;}

        return nums;
    }
};