class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int n = values.size(), maxScore = INT_MIN;
        vector<int> suffixMax(n);

        if (n < 2){
           return values[0] + values[1] + 0 - 1;  
        } 
        
        suffixMax[n - 1] = values[n - 1] - (n - 1);
        
        for (int i = n - 2; i >= 0; i--) {
            suffixMax[i] = max(suffixMax[i + 1], values[i] - i);
        }
        
        for (int i = 0; i < n - 1; i++) {
            maxScore = max(maxScore, values[i] + i + suffixMax[i + 1]);
        }

        return maxScore;
    }
};