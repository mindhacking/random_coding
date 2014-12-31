class Solution {
public:
    vector<vector<int> > subsets(vector<int> &S) {
      vector<vector<int>> ret;
      vector<int> tmp;
      if (S.size() == 0) return ret;
      subsets(ret,tmp,S,0);
      return ret;
    }
    void subsets(vector<vector<int>> &ret, vector<int> tmp, vector<int> &S, int pos)
    {
        if (pos == S.size())
        {
            sort(tmp.begin(),tmp.end());
            ret.push_back(tmp);
            return;
        }
        subsets(ret,tmp,S,pos+1);
        tmp.push_back(S[pos]);
        subsets(ret,tmp,S,pos+1);
        
    }
};
