class Solution {
public:
    vector<int> twoSum(vector<int> &numbers, int target) {
        unordered_map<int, int> mapping;
        vector<int> res;
        for(int i=0;i<numbers.size();++i) mapping[numbers[i]]=i;
        for(int i=0;i<numbers.size()-1;++i)
        {
            if(mapping.find(target-numbers[i])!=mapping.end())
            {
                if(i==mapping[target-numbers[i]]) continue;
                res.push_back(i+1);
                res.push_back(mapping[target-numbers[i]]+1);
                break;
            }
        }
        return res;
    }
};
