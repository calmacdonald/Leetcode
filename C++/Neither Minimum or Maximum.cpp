class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int maxVector = *max_element(nums.begin(),nums.end());
        int minVector = *min_element(nums.begin(),nums.end());

        for (auto i : nums){
            if (i < maxVector && i > minVector){
                return i;
            }
        }

        return -1;
    }
};