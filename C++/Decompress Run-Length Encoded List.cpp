class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> encodedList;
        for(int i = 0; i < nums.size(); i+=2){
            for(int j = 0; j < nums[i]; j++){
                encodedList.push_back(nums[i+1]);
            }
        }
        return encodedList;
    }
};

// https://leetcode.com/problems/decompress-run-length-encoded-list/description/