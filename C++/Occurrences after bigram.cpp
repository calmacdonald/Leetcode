class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) {
        vector<string> ans;
        vector<string> temp;
        string str = "";
        for(auto x : text){
            if(x == ' '){
                temp.push_back(str);
                str = "";
            }else{
                str += x;
            }
        }
        temp.push_back(str);

        for(int i=2; i<temp.size(); i++){
            if(temp[i-2] == first && temp[i-1] == second)
            ans.push_back(temp[i]);
        }
        return ans;
    }
};