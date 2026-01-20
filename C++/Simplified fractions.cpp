class Solution {
public:
    vector<string> simplifiedFractions(int n) {
        vector<string> v;
        unordered_map<float, int> mp;

        for (int i = 2; i <= n; i++) { // denominator
            for (int j = 1; j < i; j++) { // numerator
                float val = (float)j / i;
                if (mp.count(val) == 0) {
                    mp[val] = 1;
                    v.push_back(to_string(j) + "/" + to_string(i));
                }
            }
        }

        return v;
    }
};