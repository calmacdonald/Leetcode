class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int cnt = 0;
        int max = 0;

        for(auto sentence : sentences){
            cnt = 0;
            for(auto subStr : sentence){
                if(subStr == ' '){
                    cnt++;
                }
            }
            if(++cnt > max){
              max = cnt;  
            } 
        }
        return max;
    }
};