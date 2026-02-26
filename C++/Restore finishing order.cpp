class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        vector<int> res;
        for(int item : order){
            for(int f : friends){
                if(f == item) 
                    res.push_back(item);
            }
        }
        return res;
    }
};