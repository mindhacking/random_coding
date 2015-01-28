class Solution {
public:
    string simplifyPath(string path) {
        stack<string> res;
        vector<int> pos;
        for(int i = 0; i < path.size(); ++i)
            if (path[i] == '/') pos.push_back(i);
        if (path[path.size()-1] !='/') pos.push_back(path.size());
        for (int i = 0; i < pos.size()-1; ++i)
            if(pos[i]+1 != pos[i+1]) 
            {
                string tmp = path.substr(pos[i]+1,pos[i+1]-pos[i]-1);
                if (tmp == "..")
                    if (!res.empty()) res.pop();
                    else continue;
                else if (tmp == ".") continue;
                else res.push(tmp);
            }
        if(res.empty()) return "/";
        string ret="";
        stack<string> res2;
        while(!res.empty()) 
        {
            res2.push(res.top());
            res.pop();
        }
        while(!res2.empty())
        {
            ret+="/";
            ret+=res2.top();
            res2.pop();
        }
        return ret;
    }
};
