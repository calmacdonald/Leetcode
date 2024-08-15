class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        int numBags = capacity.size();
        int ans = 0;
        vector<int> remaining(numBags);

        for(int i = 0; i < numBags; i++){
            remaining[i] = capacity[i] - rocks[i];
        }

        sort(remaining.begin(), remaining.end());

        for(int i = 0; i < numBags; i++){
            if(remaining[i] > 0){
                if(remaining[i] < additionalRocks){
                    additionalRocks -= remaining[i];
                    remaining[i] = 0;
                }

                else{
                    remaining[i] -= additionalRocks;
                    additionalRocks = 0;
                }
            }

            if(additionalRocks == 0){
                break;
            }
        }

        for(int i = 0; i < numBags; i++){
            if(remaining[i] == 0){
                ans++;
            }
        }

        return ans;
    }

};