class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> mp;

        for(int i = 0; i < n; i++) {
            mp[nums[i]]++;
        }

        if (mp.size() == 1) return false;
        else{
            return true;
        }
    }
};