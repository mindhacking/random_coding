class Solution {
public:
    int maxProfit(vector<int> &prices) {
        int size = prices.size();
        if(size < 2) return 0;
        int cur_min = prices[0];
        int ret = 0;
        for(int i = 1; i < size; ++i)
        {
            ret = max(ret, prices[i] - cur_min);
            cur_min = min(cur_min, prices[i]);
        }
        return ret;
    }
};
