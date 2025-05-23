class Solution {
public:
    bool isSubstringPresent(string s) {
        string reversed_s = string(s.rbegin(), s.rend());

        for(int i = 0; i < s.length()-1; i++){
            string sub = s.substr(i, 2);

            if(reversed_s.find(sub) != string::npos) {
                return true;
            }
        }
        return false;
    }
};