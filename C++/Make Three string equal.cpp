class Solution {
public:
    int findMinimumOperations(string s1, string s2, string s3) {
        int count = 0;
        for (int i = 0; i < min({s1.length(), s2.length(), s3.length()}); i++){
            if (s1[i] == s2[i] && s2[i] == s3[i]){
                count++;
            }
            else{
                break;
            }
        }
        if (count > 0){
            return (s1.length() + s2.length() + s3.length() - 3*count);
        }
        else{
            return -1;
        }
    }
};