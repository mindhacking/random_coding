class Solution {
public:
    static bool cmp(string s1, string s2)
    {
        if(s1==s2) return false;
        string s1s2 = s1+s2;
        string s2s1 = s2+s1;
        for(int i=0;i<s1s2.size();++i)
        {
            if(s1s2[i]==s2s1[i]) continue;
            return s1s2[i] > s2s1[i];
        }
        return false;
    }
    string largestNumber(vector<int> &num) {
        vector<string> numstr;
        for(int i=0;i<num.size();++i) numstr.push_back(to_string(num[i]));
        sort(numstr.begin(),numstr.end(),cmp);
        string ret="";
        if(numstr[0]=="0") return "0";
        for(int i=0;i<numstr.size();++i) 
        {
           ret+=numstr[i];
        }
        return ret;
    }
};
