class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {
        vector<int> indices;
        vector<int> result(queries.size());

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == x) {
                indices.push_back(i);
            }
        }

        for (int i = 0; i < queries.size(); i++) {
            int query = queries[i];
            if (query - 1 < indices.size()) {
                result[i] = indices[query - 1];
            } else {
                result[i] = -1;
            }
        }

        return result;
    }
};