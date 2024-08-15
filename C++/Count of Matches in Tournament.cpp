class Solution {
public:
    int numberOfMatches(int n) {
        int numMatches = 0;
        
        while(n > 1){ // while a match exists
            numMatches += n/2;
            n = n - (n/2);
        }

        return numMatches;
    }
};