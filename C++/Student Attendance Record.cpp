class Solution {
public:
    bool checkRecord(string s) {
        int countA = 0;
        int countL = 0;
        for (int i = 0; i < s.size(); i++){
            if(s[i] == 'A'){
                countA++;
            }
            else if ((i > 1) && (s[i] == 'L') && (s[i-1] == 'L') && (s[i-2] == 'L')){
                countL++;
            }
        }

        if((countA < 2) && (countL == 0)){
            return true;
        }

        return false;
    }
};

// https://leetcode.com/problems/student-attendance-record-i/description/