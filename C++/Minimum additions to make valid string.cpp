class Solution {
public:
    int addMinimum(string word) {
        int n = word.size();
        int current = 0,i=0,ans=0;
        while(i<n || current!=0)
        {
            if(i<n && word[i]-'a' == current)
            {
                current++;
                i++;
            }
            else
            {
                current++;
                ans++;
            }
            current%=3;
        }
        return ans;
    }
};