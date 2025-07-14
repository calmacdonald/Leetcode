class Solution {
public:
    long long countSubstrings(string s, char c) {
        long long n = 0;
        for(char i : s){
            if(i == c) n++;
        }
        return n + (n-1) * n / 2;
    }
};