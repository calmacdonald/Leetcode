class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int n = bank.size();
        int m = bank[0].size();
        int ans = 0;
        int cnt = 0;

        for(int i = 0; i < m; i++){
            if(bank[0][i] == '1'){
                cnt++;
            }
        }

        for(int i = 1; i < n; i++){
            int currCnt = 0;
            int j = 0;
            while(j < m){
                if(bank[i][j] == '1'){
                    currCnt++;
                }
                j++;
            }

            if(currCnt == 0){
                continue;
            }

            ans += currCnt*cnt;
            cnt =  currCnt;
        }
        return ans;
    }
};