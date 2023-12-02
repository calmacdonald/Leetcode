class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> numbers;

        for (int i = 0; i < nums.size(); i++){
            if(nums[i] % 2 == 0){
                numbers.push_back(nums[i]);
            }
        }

        for(int j = 0; j < nums.size(); j++){
            if(nums[j] % 2 == 1){
                numbers.push_back(nums[j]);
            }
        }

        return numbers;

    }
};

// https://leetcode.com/problems/sort-array-by-parity/description/