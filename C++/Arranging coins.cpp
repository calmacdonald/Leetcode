class Solution {
public:
    int arrangeCoins(int n) {
        int ans = 0;
        for(int i = 1; i <= n; i++){
            if(n / i >= 1){
                ans++;
                n -= i;
            }
        }
        return ans;
    }
};