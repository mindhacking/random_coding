class Solution {
public:
    int maxProfit(vector<int> &prices) {
        vector<int> diff;
        if (prices.size() < 2) return 0;
        int ret=0;
        for (int i = 0; i < prices.size()-1; ++i)
            ret+= (prices[i+1]-prices[i])>0?prices[i+1]-prices[i]:0;
        return ret;
    }
};
