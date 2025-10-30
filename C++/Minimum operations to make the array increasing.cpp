class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n=nums.size();
        int index=0;
        int count=0;
        while(index<n-1){
            int diff=nums[index]-nums[index+1];
            if(diff<0){
                index++;
            }else{
                nums[index+1]+=diff+1;
                count+=diff+1;
                index++;
            }
        }
        return count;
    }
};