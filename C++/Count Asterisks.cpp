class Solution {
public:
    int countAsterisks(string s) {
        int res = 0, pipes = 0;
        for (auto ch : s) {
            if (ch == '|'){
                pipes++;
            } else if (ch == '*' && (pipes % 2 == 0)){
                res++;
            }
        }
        return res;
    }
};