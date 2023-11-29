class Solution {
public:

    int countVowel(string s){
      int count = 0;
      for(int i = 0; i < s.size(); i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'){
          count++;
        }
      }

      return count;
    }

    bool halvesAreAlike(string s) {
        int counta = countVowel(s.substr(0, s.size()/2));
        int countb = countVowel(s.substr(s.size()/2));

        if (counta == countb) {
          return true;
        }

        return false;
    }
};

// https://leetcode.com/problems/determine-if-string-halves-are-alike/description/