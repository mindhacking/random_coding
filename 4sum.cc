class Solution {
public:
    vector<vector<int> > fourSum(vector<int> &num, int target) {
        vector<vector<int> > res;
        if(num.size()<4) return res;
        sort(num.begin(), num.end());
        unordered_map<int, vector<pair<int, int> > > mapping;
        for(int i=0;i<num.size()-1;++i)
            for(int j=i+1;j<num.size();++j)
                mapping[num[i]+num[j]].push_back(pair<int,int>(i, j));

        for(int i=0;i<num.size()-1;++i)
            for(int j=i+1;j<num.size();++j)
            {
                int key = target - num[i] - num[j];
                if(mapping.find(key) == mapping.end()) continue;
                const auto& vec = mapping[key];
                for (int k = 0; k < vec.size(); ++k) {
                    if (i <= vec[k].second) continue;
                    res.push_back( { num[vec[k].first],num[vec[k].second], num[i], num[j] });
                }
            }        
        sort(res.begin(), res.end());
        res.erase(unique(res.begin(), res.end()), res.end());
        return res;
    }
};
