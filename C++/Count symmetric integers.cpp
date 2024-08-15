class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int count = 0;
        string s = "";

        for (int i = low; i <= high; i++){

            string s = to_string(i);
            int n = s.length();

            if(n % 2 == 0){

                int left = 0;
                int lsum = 0;
                int rsum = 0;
                int right = n-1;

                while(left < n/2){
                    lsum+= int(s[left]);
                    rsum+= int(s[right]);
                    left++;
                    right--;
                }

                if(lsum == rsum){
                    count++;
                }
            }
            
        }

        return count;
    }
};