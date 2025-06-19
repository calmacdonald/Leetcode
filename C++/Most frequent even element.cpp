class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int,int> freq;
        for (int i = 0; i < nums.size(); i++){
            if (nums[i] % 2 == 0){
                freq[nums[i]]++;
            }
        }


        int maxFreq = -1, maxNum = -1;
        for (auto pair : freq){
            if (pair.second > maxFreq){
                maxFreq = pair.second;
                maxNum = pair.first;
            }
            else if (pair.second == maxFreq) maxNum = min(maxNum, pair.first);
        }

        return maxNum;
    }
};