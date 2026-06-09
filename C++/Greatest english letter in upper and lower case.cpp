class Solution {
public:
    string greatestLetter(string s) {
        string ans = "";
        unordered_set<char> st(s.begin(), s.end());

        for (char ch : st) {
            if (islower(ch) && st.count(toupper(ch))) {
                ans = max(ans, string(1, (char)toupper(ch)));
            }
        }

        return ans;
    }
};