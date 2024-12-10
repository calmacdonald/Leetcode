class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int doneHours = 0;

        for (int i = 0; i < hours.size(); i++){
            if(hours[i] >= target){
                doneHours++;
            }
        }

        return doneHours;
    }
};