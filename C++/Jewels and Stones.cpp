class Solution {
public:

    bool isJewel(string jewels, char stone){
        for(int i = 0; i < jewels.size(); i++){
            if(stone == jewels[i]){
                return true;
            }
        }

        return false;
    }

    int numJewelsInStones(string jewels, string stones) {
        int jewelCount = 0;
        for(int i = 0; i < stones.size(); i++){
            if (isJewel(jewels, stones[i])){
                jewelCount++;
            }
        }
        return jewelCount;
    }
};

// https://leetcode.com/problems/jewels-and-stones/description/