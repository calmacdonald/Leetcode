class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int totalBottles = numBottles;
        int remainder, exchanged = 0;

        while(numBottles >= numExchange){
            
            exchanged = floor(int(numBottles / numExchange));
            totalBottles += exchanged;
            remainder = numBottles % numExchange;
            numBottles = exchanged + remainder;
        }

        return totalBottles;
    }
};