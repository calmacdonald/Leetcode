class Solution {
public:
    int numSubarrayBoundedMax(vector<int>& nums, int left, int right) {
        int m = 0;
        int count = 0;
        int i = 0;

        for(int j = 0 ; j <= nums.size() - 1 ; j++){
            
            if(nums[j] >= left && nums[j] <= right){
                m = j - i + 1;
                count += m;
            }
            else if(nums[j] < left){
                count += m;
            }
            else if(nums[j] > right){
                m = 0;
                i = j + 1;
            }
        }
        return count;
    }
};