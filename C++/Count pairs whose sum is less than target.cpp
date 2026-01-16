class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int n = nums.size();
        int ct =0;
        for (int i=0;i<n;i++){
            for (int j=i+1;j<n;j++){
                if (target>nums[i] + nums[j]){
                    ct++;
                }
            }
        }
        return ct;
    }
};