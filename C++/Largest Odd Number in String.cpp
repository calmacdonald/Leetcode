class Solution {
public:
    string largestOddNumber(string num) {
        if (num.empty()){
            return "";
        }

        else{
            for (int i=num.size() - 1; i>=0; i--){
                if(int(num[i]) % 2 != 0){
                    return num.substr(0, i+1);
                }
            }
            return "";
        }
    }
};

// https://leetcode.com/problems/largest-odd-number-in-string/description/