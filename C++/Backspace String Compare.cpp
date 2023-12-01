class Solution {
public:
    stack<char> stackComp(string s){
        stack<char> tempS;
        for (int i = 0; i < s.size(); i++){
            if ((!tempS.empty()) && (s[i] == '#')){
                tempS.pop();
            }
            else if(s[i] != '#'){
                tempS.push(s[i]);
            }
        }

        return tempS;
    }

    bool backspaceCompare(string s, string t) {

        stack<char> tempS = stackComp(s);
        stack<char> tempT = stackComp(t);

        return (tempS == tempT);
    }
};

// https://leetcode.com/problems/backspace-string-compare/description/