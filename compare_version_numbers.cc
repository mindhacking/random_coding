class Solution {
public:
    static void parseStr(const string s, vector<int>& v)
    {
        char *buf = new char[s.size()*sizeof(char)];
        strcpy(buf,s.c_str());
        char *p = strtok(buf,".");
        while(p!=NULL)
        {
            v.push_back(atoi(p));
            p=strtok(NULL,".");
        }
        delete [] buf;
    }
    static int compareV(vector<int>& v1, vector<int>& v2)
    {
      for(int i=0;i<max(v1.size(),v2.size());++i)
      {
          int val1 = i>=v1.size()? 0 : v1[i];
          int val2 = i>=v2.size()? 0 : v2[i];
          if (val1 != val2) return val1>val2? 1:-1;
      }
      return 0;
    }
    int compareVersion(string version1, string version2) {
        vector<int> v1;
        vector<int> v2;
        parseStr(version1, v1);
        parseStr(version2, v2);
        return compareV(v1,v2);
    }
    
};

