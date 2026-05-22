class Solution {
public:
    vector<int> numMovesStones(int a, int b, int c) {
        int m1=min(min(a,b),c),m2=max(max(a,b),c),mid=a+b+c-m1-m2;
        int t=m2-m1;
        if(t==2)return{0,0};
        if(abs(mid-m1)<=2||abs(mid-m2)<=2)return{1,t-2};
        return {2,t-2};
    }
};