class Solution {
public:
    int flipgame(vector<int>& fronts, vector<int>& backs) {
        int n = fronts.size(), ans = INT_MAX;
        unordered_map<int, int> um;
        for(int i = 0; i < n; i++)
        {
            if(fronts[i] == backs[i])
                um[fronts[i]]++;
        }
        for(int i = 0; i < n; i++)
        {
            if(!um.count(fronts[i]))
            {
                ans = min(ans, fronts[i]);
                um[fronts[i]]++;
            }
            if(!um.count(backs[i]))
            {
                ans = min(ans, backs[i]);
                um[backs[i]]++;
            }
        }
        if(ans == INT_MAX)
            return 0;
        return ans;
    }
};