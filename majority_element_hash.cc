class Solution {
public:
    int majorityElement(vector<int> &num) {
        unordered_map<int, int> ret;
        for(int i=0;i<num.size();i++)
        {
            auto pos = ret.find(num[i]);
            if(pos != ret.end())
                pos->second++;
            else
                ret.insert({num[i],1});
        }
        for(auto pos = ret.begin(); pos!=ret.end(); pos++)
            if(pos->second > num.size()/2) return pos->first;
    }
};
