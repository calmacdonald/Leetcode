class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        stack<int> st;
        vector<int> vec;
        for(int i = prices.size() - 1; i >= 0; --i)
        {
            while(!st.empty() && st.top() > prices[i])
            {
                st.pop();
            }
            if(st.empty())
            {
                vec.push_back(0);
            }
            else
            {
                vec.push_back(st.top());
            }
            st.push(prices[i]);
        }
        reverse(vec.begin(), vec.end());
        for(int i = 0; i < vec.size(); ++i)
        {
            vec[i] = prices[i] - vec[i];
        }
        return vec;
    }
};