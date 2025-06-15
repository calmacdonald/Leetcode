class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        int n = nums.size(), mini = 101;
        sort(nums.begin() , nums.end());
        for(int i = 0; i < n / 2; ++i){
            int sum = nums[i] + nums[n - 1 - i];
            mini = min(mini , sum);
        }
        return mini / 2.0;
    }
};