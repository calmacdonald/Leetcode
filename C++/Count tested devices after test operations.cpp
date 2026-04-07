class Solution {
public:
    int countTestedDevices(vector<int>& batteryPercentages) {
        int currentValue = 0;
        int count = 0;
        int n = batteryPercentages.size();
        for (int i = 0; i < n; i++) {
            if (batteryPercentages[i] - currentValue <= 0)
                continue;
            else {
                currentValue++;
                count++;
            }
        }
        return count;
    }
};