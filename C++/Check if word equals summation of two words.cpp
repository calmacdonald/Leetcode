class Solution {
public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        int n1 = 0;
        int n2 = 0;
        int n3 = 0;
        int k1 = firstWord.size();
        int k2 = secondWord.size();
        int k3 = targetWord.size();
        for (int i = 0; i < k1; i++) {
            n1 = n1 * 10 + (firstWord[i] - 'a');
        }
        for (int i = 0; i < k2; i++) {
            n2 = n2 * 10 + (secondWord[i] - 'a');
        }
        for (int i = 0; i < k3; i++) {
            n3 = n3 * 10 + (targetWord[i] - 'a');
        }
        return ((n1 + n2) == n3);
    }
};