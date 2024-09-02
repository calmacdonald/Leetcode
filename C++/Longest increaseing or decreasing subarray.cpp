class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int longest = 1;
        int inclen = 1;
        int declen = 1;

        for (int i = 1; i < nums.size(); i++){

            if(nums[i-1] > nums[i]){
                inclen++;
                declen = 1;
            }

            else if(nums[i] > nums[i-1]){
                declen++;
                inclen = 1;
            }

            else{
                inclen = 1;
                declen = 1;
            }

            longest = max(longest, max(inclen, declen));
        }

        return longest;


    }
};