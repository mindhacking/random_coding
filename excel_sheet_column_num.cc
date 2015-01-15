class Solution {
public:
    int titleToNumber(string s) {
        int ret=0;
        if (s.size()==0) return ret; 
        for(int i = 0; i < s.size() - 1;i++)
        {
            ret+=s[i]-'A'+1;
            ret *= 26;
        }
        ret+=s[s.size()-1]-'A'+1;
        return ret;
    }
};
