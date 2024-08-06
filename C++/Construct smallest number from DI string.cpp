class Solution {
public:
    string smallestNumber(string pattern) {
        string result = "";
        string stack = "";

        for(int i = 0; i <= pattern.length(); i++){
            stack.push_back('1'+i);
            if(pattern[i] == 'I' || i == pattern.length()) {
                while(stack.length() > 0){
                    result.push_back(stack.back());
                    stack.pop_back();
                }
            }
        }

        return result;
    }
};