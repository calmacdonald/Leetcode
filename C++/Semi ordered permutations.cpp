class Solution {
public:
    int semiOrderedPermutation(vector<int>& nums) {
        int first = find(begin(nums), end(nums), 1) - begin(nums);
        int last = find(begin(nums), end(nums), nums.size()) - begin(nums);
        return first + (nums.size() - last - 1) - (first > last);
    }
};