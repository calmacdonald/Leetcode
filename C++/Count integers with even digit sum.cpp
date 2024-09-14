class Solution {
public:
    int iseven(int n){
        int sum = 0;
        while(n>0){
            sum+=n%10;
            n = n/10;
        }
        if(sum%2==0){
            return true;
        }
        return false;
    }
    int countEven(int num) {
        int count = 0;

        if (num<10){
            for (int i=2;i<=num;i++){
                if(i%2==0){
                    count++;
                }
            }
        }
        else{
            for (int i = 1; i<=num;i++){
                if(iseven(i)){
                    count++;
                }
            }
        }
        return count;
    }
};