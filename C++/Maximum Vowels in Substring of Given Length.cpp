#include <string>
#include <iostream>

using namespace std;

class Solution {
public:
    bool checkVowel(char c){
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
            return true;
        }

        return false;
    }

    int maxVowels(string s, int k) {
        int count = 0;

        for(int i = 0; i < k; i++){
            if(checkVowel(s[i])) count++;
        }

        int tempMax = count;

        for(int i = k; i < s.size(); i++)
        {
            if(checkVowel(s[i])) count++;
            if(checkVowel(s[i-k])) count--;
            tempMax = max(tempMax, count);
        }

        return tempMax;
    }
};

void main(){
    Solution rizz = Solution();
    int number = rizz.maxVowels("bffriiipasd",3);
    printf("%d", number);
}

// https://leetcode.com/problems/maximum-number-of-vowels-in-a-substring-of-given-length/description/