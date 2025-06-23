class Solution {
public:
    int totalMoney(int n) {
        int count = 0, answer = 0;
        for (int i = 1; i <= n; i++) {
            if ((i - 1) % 7 == 0) {
                count = i / 7;
            }

            count++;
            answer += count;
        }

        return answer;
    }
};