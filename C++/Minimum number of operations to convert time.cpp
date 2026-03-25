class Solution {
public:
    int convertTime(string current, string correct) {
        int total_minutes = 60 - stoi(current.substr(3,2));

        int hour = stoi(correct.substr(0,2)) - stoi(current.substr(0,2))+1;
        int minutes = stoi(correct.substr(3,2));

        total_minutes += hour*60 + minutes;
        int ans = 0;

        while(total_minutes>0){
            if(total_minutes >= 60){
                int k = total_minutes/60;
                ans += k;
                total_minutes -= k*60;
            }else if(total_minutes >= 15){
                int k = total_minutes/15;
                ans += k;
                total_minutes -= k*15;
            }else if(total_minutes >= 5){
                int k = total_minutes/5;
                ans += k;
                total_minutes -= k*5;
            }else{
                ans += total_minutes;
                total_minutes = 0;
            }
        }

        return ans-2;
    }
};