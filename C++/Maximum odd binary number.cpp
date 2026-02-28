class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int count_0 = 0, count_1 = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '0') count_0++;
            else count_1++;
        }
        s[s.size()-1] = '1';
        count_1--;
        for(int i = 0; i < s.size()-1; i++){
            if(count_1 != 0){
                s[i] = '1';
                count_1--;
            }
            else s[i] = '0';
        }
        return s;
    }
};