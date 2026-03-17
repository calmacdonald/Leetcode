class Solution {
public:
    string removeOuterParentheses(string s) {
        int n = s.size();
        string ans;
        int countOpenBrace = 0;
        for(int i = 0; i < n; i++){
            if(countOpenBrace > 0 && !(countOpenBrace == 1 && s[i] == ')')) ans += s[i];
            if(s[i] == '(') countOpenBrace++;
            else countOpenBrace--;
        }

        return ans;
    }
};