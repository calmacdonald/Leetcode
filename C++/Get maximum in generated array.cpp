class Solution {
public:
    int getMaximumGenerated(int n) {
        if(n < 2) return n;
        int arr[101] = {0}, maxi = 1;
        arr[0] = 0; arr[1] = 1;
        for(int i = 2; i <= n; ++i){
            if(i & 1) arr[i] += arr[i / 2 + 1] + arr[i / 2];
            else arr[i] += arr[i / 2];
            maxi = max(maxi , arr[i]);
        }
        return maxi;
    }
};