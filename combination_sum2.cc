class Solution {
public:
    vector<vector<int> > combinationSum2(vector<int> &num, int target) {
        sort(num.begin(), num.end()); 
        vector<vector<int> > ret;
        vector<int> cur;
        dfs(num, target, 0, cur, ret);
        return ret;
    }
    static void dfs(vector<int> &nums, int gap, int start,
        vector<int> &cur, vector<vector<int> > &ret) {
        if (gap == 0) {
            ret.push_back(cur);
            return;
        }
        int previous = -1;
        for (size_t i = start; i < nums.size(); i++) {
            if (previous == nums[i]) continue;
            if (gap < nums[i]) return; // 剪枝
            previous = nums[i];
            cur.push_back(nums[i]);
            dfs(nums, gap - nums[i], i + 1, cur, ret);
            cur.pop_back();
    	}
    }
};
