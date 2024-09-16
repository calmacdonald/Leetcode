class Solution {
public:

    bool isPalindrome(string word){
        int k = word.size()-1;
        for (int i = 0; i < k; i++){
            if(word[i] != word[k]){
                return false;
            }
            k--;
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) {
        for (int i = 0; i < words.size(); i++){
            if(isPalindrome(words[i])){
                return words[i];
            }
        }
        return "";
    }
};