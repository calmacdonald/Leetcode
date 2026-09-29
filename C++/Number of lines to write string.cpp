class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        int linesCount=0;
        int sum=0;
        for(int i=0;i<s.size();i++){
            if(sum+widths[s[i]-'a']>100){
                linesCount++;
                sum=widths[s[i]-'a'];
            }
            else{
                sum+=widths[s[i]-'a'];
            }
        }
        return {linesCount+1,sum};
    }
};