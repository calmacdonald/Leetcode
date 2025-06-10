class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int i, ans=0, alt=0;

        for(i=0;i<gain.size();i++)
        {
            alt=alt+gain[i];
            ans=max(ans,alt);
        }    
        return ans;
    }
};