class Solution {
public:
    vector<vector<int> > subsetsWithDup(vector<int> &S) {
        sort(S.begin(),S.end());
        vector<vector<int> > res;
        vector<int> ss;
        res.push_back(ss);
        ss.push_back(S[0]);
        res.push_back(ss);
        int count=1;
        int pre = S[0];
        for (int i=1;i<S.size();i++){
                int sz = res.size();                
                if (S[i]!=pre){
                    count=0;
                    for (int j=0;j<sz;j++){
                        ss=res[j];
                        ss.push_back(S[i]);
                        res.push_back(ss);
                        count++;
                    }
                }else{
                    int ind=count;
                    count=0;
                    for (int j=sz-ind;j<sz;j++){
                        ss=res[j];
                        ss.push_back(S[i]);
                        res.push_back(ss);
                        count++;
                    }
                     
                }              
            pre = S[i];
        }
        return res;
    }
};
