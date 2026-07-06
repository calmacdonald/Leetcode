class Solution {
public:
    long long numOfSubsequences(string s) {
        const int n = s.length();
        long long L = 0, C = 0, T = 0;
        long long LC = 0, CT = 0, LCT = 0;
        for(int i = 0; i < n; ++i){
            const char x = s[i];
            if(x == 'L') ++L;
            else if(x == 'C'){
                LC += L; ++C;
            }
            else if(x == 'T'){
                LCT += LC; CT += C; ++T;
            }
        }
        long long add = max(LC , CT);
        L = 0;
        for(int i = 0; i < n; ++i){
            const char x = s[i];
            if(x == 'L'){
                ++L;
                add = max(add , L * T);
            }
            else if(x == 'T') --T;
        }
        return LCT + add;
    }
};