class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        string ans;

        for(int i=0;i<words.size();i++)
        {
            for(int j=0;j<words[i].size();j++)
            {
                 ans.push_back(words[i][j]);
                 
            }
           
            if(s==ans)
            {
                return true;
            }

            
        }
        return false;
    }
};