class Solution {
public:
    string removeTrailingZeros(string num) {
        for (int i = num.length() - 1; i >= 0; i--){
            if(num[i] != '0'){
                return num.substr(0, i+1);
            }
        }
        return num;
    }
};