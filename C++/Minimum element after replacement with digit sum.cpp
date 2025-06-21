class Solution {
public:
    int minElement(vector<int>& nums) {
        int mini = 37;
        for(int i = 0, n = nums.size(); i < n; i++){
            int sum = 0, num = nums[i];
            while(num){
                sum += num % 10;
                num /= 10;
            }
            mini = min(mini , sum);
        }
        return mini;
    }
};