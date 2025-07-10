class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        if (target.size() != arr.size()) {
            return false;
        }

        vector<int> sortedTarget = target;
        vector<int> sortedArr = arr;
        
        sort(sortedTarget.begin(), sortedTarget.end());
        sort(sortedArr.begin(), sortedArr.end());
        
        return sortedTarget == sortedArr;
    }
}; 