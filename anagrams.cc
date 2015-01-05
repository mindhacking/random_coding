class Solution {
public:
    vector<string> anagrams(vector<string> &strs) {
        unordered_map<string, vector<string>> group;
        for(int i=0;i<strs.size();i++)
        {
            string key=strs[i];
            sort(key.begin(),key.end());
            group[key].push_back(strs[i]);
        }
        vector<string> ret;
        for(auto i=group.begin();i!=group.end();i++)
            if(i->second.size()>1)
                ret.insert(ret.end(),i->second.begin(),i->second.end());
        return ret;
    }
};
