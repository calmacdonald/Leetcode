class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }

        vector<int> ans;
        for (int i = 0; i < nums.size(); i++) {
            if ((mp[nums[i]] == 1) && (mp.find(nums[i] - 1) == mp.end()) && (mp.find(nums[i] + 1) == mp.end())) {
                ans.push_back(nums[i]);
            }
        }

        return ans;
    }
};