class Solution {
public:
    string reverseStr(string s, int k) {
        for (int i = 0; i < s.size(); i += 2 * k) {
            int j = min(i + k ,(int)s.length());

            reverse(begin(s) + i , begin(s) + j);
        }
        return s;
    }
};