class Solution {
public:
    vector<vector<int> > threeSum(vector<int> &num) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        vector<vector<int> > ret;
        if(num.size()<3) return ret;
        vector<int>::iterator it1,it2,it3;
        sort(num.begin(),num.end());
        for(it1=num.begin();it1<prev(num.end(),2);it1++)
        {
            if(*it1 > 0) break;
            it2=next(it1);
            it3=prev(num.end());
            if(it1!=num.begin() && (*it1 == *prev(it1))) continue;
            while(it2<it3)
            {
              if(*it3 < 0) break;
              if(*it1+*it2+*it3 == 0) 
              {
                ret.push_back({*it1,*it2,*it3});
                it2++;
                it3--;
              }
              else if (*it1+*it2+*it3 > 0)
              {
                it3--;
              }
              else it2++;
            }
        }
        vector<vector<int>>::iterator it;
        sort(ret.begin(),ret.end());
        ret.erase(unique(ret.begin(),ret.end()),ret.end());
        return ret;
    }
};
