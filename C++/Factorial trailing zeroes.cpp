class Solution {
public:
    int trailingZeroes(int n) {
        int count = 0, divisor = 5;

        while (n >= divisor){
            count += floor(n / divisor);
            divisor *= 5;
        }

        return count;
    }
};