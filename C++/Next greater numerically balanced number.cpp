class Solution {
public:
    int nextBeautifulNumber(int n) {
        for (int num = n + 1; ; num++) {
            vector<int> count(10, 0);
            int temp = num;

            while (temp > 0) {
                count[temp % 10]++;
                temp /= 10;
            }

            bool isAns = true;
            for (int i = 0; i < 10; i++) {
                if (count[i] > 0 && count[i] != i) {
                    isAns = false;
                    break;
                }
            }

            if (isAns) return num;
        }
        return -1;
    }
};