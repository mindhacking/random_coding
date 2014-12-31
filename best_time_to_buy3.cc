ass Solution {
public:
    int maxProfit(vector<int> &prices) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int profit = 0, n = prices.size();
        if (n == 0) {
            return 0;
        }
        vector<int> l(n,0);
        vector<int> r(n,0);
        int min = prices[0];
        for (int i = 1; i < n; i++) {
            l[i] = prices[i] - min > l[i - 1] ? prices[i] - min : l[i - 1];        
            min = prices[i] < min ? prices[i] : min;
        }
        int max = prices[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            r[i] = max - prices[i] > r[i + 1] ? max - prices[i] : r[i + 1];
            max = prices[i] > max ? prices[i] : max;
        }
        for (int i = 0; i < n; i++) {
            profit = l[i] + r[i] > profit ? l[i] + r[i] : profit;
        }
        return profit;      
    }
};
