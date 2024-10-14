class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        

        if(nums.size() == 1){
            return 0;
        }

        for (int i = 0; i < nums.size(); i++){
            int leftSum=0;
            int rightSum=0;
            for(int j=i+1;j<nums.size();j++){
                rightSum+=nums[j];
            }

            for(int k=0;k<i;k++){
                leftSum+=nums[k];
            }

            if(rightSum == leftSum){
                return i;
            }
        }

        return -1;
    }
};