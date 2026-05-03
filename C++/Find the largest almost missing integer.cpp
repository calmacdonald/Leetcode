class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        unordered_map<int,int>cnt;
        for(int i=0;i<nums.size();i++){
            unordered_map<int,int>check;
            if(nums.size()-i<k) break;
            for(int j=i;j<i+k&&j<nums.size();j++){
                check[nums[j]]++;
            }
            for(auto &u:check){
                cout<<u.first<<" "<<u.second<<endl;
                cnt[u.first]++;
            }
        }
        int mx=-1;
        for(auto &u:cnt){
            if(u.second==1) mx=max(mx,u.first);
        }
        return mx;
    }
};