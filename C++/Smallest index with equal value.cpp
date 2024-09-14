class Solution {
public:
    int smallestEqual(vector<int>& nums) {
        int small = nums[0] % 10;
        if (small == 0){
            return 0;
        }
        for (int i = 1; i < nums.size();i++){
            if (nums[i] == i % 10){
                return i;
            }
        }
        return -1;
    }
};