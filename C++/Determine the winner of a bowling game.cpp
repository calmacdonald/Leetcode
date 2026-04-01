class Solution {
public:
    int isWinner(vector<int>& player1, vector<int>& player2) {
        int n = player1.size();
        int score1 = 0, score2 = 0;
        
        for (int i = 0; i < n; i++) {
            int multiplier1 = 1;
            if (i - 1 >= 0 && player1[i - 1] == 10) multiplier1++;
            else if (i - 2 >= 0 && player1[i - 2] == 10) multiplier1++;
            score1 += player1[i] * multiplier1;
            
            int multiplier2 = 1;
            if (i - 1 >= 0 && player2[i - 1] == 10) multiplier2++;
            else if (i - 2 >= 0 && player2[i - 2] == 10) multiplier2++;
            score2 += player2[i] * multiplier2;
        }
        
        if (score1 > score2) return 1;
        if (score1 < score2) return 2;
        return 0;  // Tie
    }
};