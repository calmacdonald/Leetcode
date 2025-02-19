class Solution {
public:
    int arraySign(vector<int>& nums) {
        int count = 0; 
        bool pres=0;
        for(int i =0; i< nums.size(); i++){
            if(nums[i]<0){
                count++;
            }
            if (nums[i]==0){
                pres=1;
            }
        }

        if(count%2==0 && pres==0){
            return 1;
        }
        else if(count%2!=0 && pres==0){
            return -1;
        }
        else{
            return 0;
        }
    }
};