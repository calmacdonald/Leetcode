class Solution {
public:
    int maxOperations(vector<int>& nums) {
        int count = 1;
        int score = nums[0] + nums[1];

        nums.erase(nums.begin(),nums.begin()+2);

        while(nums.size() > 1){
            if(nums[0] + nums[1] != score){
                break;
            }
            count++;
            nums.erase(nums.begin(),nums.begin()+2);
        }

        return count;
    }
};