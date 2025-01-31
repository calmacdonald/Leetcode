class Solution {
public:
    double average(vector<int>& salary) {
        double sumAvg = 0.0;
        sort(salary.begin(), salary.end());
        for (int i = 1; i < salary.size() - 1;i++){
            sumAvg += salary[i];
        }

        return sumAvg / (salary.size() - 2);
    }
};