class Solution {
public:
    int longestContinuousSubstring(string s) {
        int ans=1;
        int cnt=1;
        char ch=s[0];
        for(int i=1;i<s.size();i++){
            if(s[i]==ch+1){
                cnt++;
                ch=s[i];
            }
            else{
                ans=max(ans,cnt);
                cnt=1;
                ch=s[i];
            }
        }
        ans=max(ans,cnt);
        return ans;
    }
};