class Solution {
public:
    vector<vector<int> > combinationSum(vector<int> &candidates, int target) {
        vector<vector<int> > ret;
        vector<int> tmp;
        sort(candidates.begin(),candidates.end());
        unique(candidates.begin(),candidates.end());
        dfs(ret,tmp,candidates,target,0);
        return ret;
    }
    void dfs(vector<vector<int>>  &ret, vector<int> cur, vector<int>& candidates, int target, int pos)
    {
        if(target < 0) return;
        if(target == 0)
        {
            ret.push_back(cur);
            return;
        }
        for(int i=pos;i<candidates.size();++i)
        {
            cur.push_back(candidates[i]);
            dfs(ret,cur,candidates,target-candidates[i],i);
            cur.pop_back();
        }
    }
};
