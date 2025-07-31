class Solution {
public:
    int findPermutationDifference(string s, string t) {
        int add=0;
        for(int i=0;i<s.size();i++)
        {
            for(int j=0;j<t.size();j++)
            {
                if(s[i]==t[j])
                {
                    add=add+abs(i-j);
                }
            }
        }
        return add;
    }
};