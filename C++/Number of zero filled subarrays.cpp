class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        int n = nums.size();
        int l = 0, r = 0;
        long long ans = 0;
        while(r<n) {
            if(nums[r++] != 0){
                l = r;
            }
            ans+= r-l;
        }
        return ans;
    }
};