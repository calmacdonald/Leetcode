class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int element_sum = 0;
        int digit_sum = 0;

        int n = nums.size(); 
        for (int i = 0; i < n; i++) {
            element_sum += nums[i];
        }
        for (int i = 0; i < n; i++) {
            int num = nums[i];

            while (num > 0) {
                digit_sum += num % 10;
                num /= 10;
            }
        }

        return element_sum - digit_sum;
    }
};