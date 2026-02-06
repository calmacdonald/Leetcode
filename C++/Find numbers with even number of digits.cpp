class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        for(int i=0;i<n;i++){
            int digCount=0;
            while(nums[i]>0){
                nums[i]=nums[i]/10;
                digCount++;
            }
            if(digCount%2==0){
                count++;
                digCount=0;
            }
            digCount=0;
        }
        return count;
    }
};