class Solution {
public:
    int splitNum(int num) {
        vector<int> nums;
        while(num > 0){
            nums.push_back(num%10);
            num /= 10;
        }

        sort(nums.begin(),nums.end());
        int n1 = 0 , n2 = 0;
        for(int i = 0; i<nums.size(); i++){
            if(i%2 == 0)
                n1 = n1 * 10 + nums[i];
            else
                n2 = n2 * 10 + nums[i];
        }
        return n1+n2;
    }
};