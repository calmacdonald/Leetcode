class Solution {
public:
    int minChanges(string s) {
        const int n = s.length();
        int res = 0;
        for(int i = 0; i < n; i += 2) 
            res += (s[i] != s[i + 1]);
        return res;
    }
};