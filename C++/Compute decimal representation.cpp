class Solution {
public:
    vector<int> decimalRepresentation(int n) {
        vector<int> ans{};
        int rem = 0, i = 0;
        while(n > 0)
        {
            rem = n%10;
            if(rem != 0)
                ans.push_back(rem * pow(10,i));
            n /= 10;
            ++i;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};