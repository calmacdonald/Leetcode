class Solution {
public:
    bool judgeSquareSum(int c) {
        for( int i = 0 ; i <= sqrt( c ) ; i++ ){
            int temp = i*i;
            int j = c - temp;
            int sqrt_j = sqrt( j );
            if( sqrt_j * sqrt_j == j ) return true;
        }
        return false;
    }
};