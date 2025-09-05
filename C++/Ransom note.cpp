class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> m1,m2;
        for(auto i:magazine){
            {m1[i]++;};
        }
        for(auto i:ransomNote){
            m2[i]++;
            if(m2[i]>m1[i]){
                return false;
            }
        }
        return true;
    }
};