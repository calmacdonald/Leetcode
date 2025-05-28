class Solution {
public:
    bool isPalindrome(string s) {
        string filtered;
        for (char c : s) {
            if (isalnum(c)) {
                filtered += tolower(c);
            }
        }

        for (int i = 0, j = filtered.size()-1; i < j; i++, j--){
            if(filtered[i] != filtered[j]){
                return false;
            }
        }
        return true;
    }
};