class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        unordered_map<int, int> count;
        int res = 0;
        for (int a : nums) {
            count[a] = max(count[a], count[k]) + 1;
            res = max(res, count[a] - count[k]);
        }
        return count[k] + res;
    }
};