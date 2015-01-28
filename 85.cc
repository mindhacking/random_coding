class Solution {
public:
    int getH(vector<int> &h) {
        stack<int> s;
        h.push_back(0);
        int sum=0;
        for(int i=0;i<h.size();)
        {
            if(s.empty()||h[s.top()]<h[i]) s.push(i++);
            else
            {
                int tmp = s.top();
                s.pop();
                sum = max(sum, h[tmp]*(s.empty()? i : i-s.top()-1));
            }
        }
        return sum;
    }
    int maximalRectangle(vector<vector<char> > &matrix) {
        int row = matrix.size();
        if(row==0) return 0;
        int col = matrix[0].size();
        vector<vector <int>> h(row, vector<int>(col,0));
        for(int j=0;j<col;++j) h[0][j] = matrix[0][j]=='0'?0:1;
        
        for(int i=1;i<row;++i)
            for(int j=0;j<col;++j)//calculate height
                h[i][j] = matrix[i][j]=='0'?0:1+h[i-1][j];  
        
        int ret = INT_MIN;
        for(int i=0;i<row;++i)
        {
            ret = max(ret,getH(h[i]));
        }
        return ret;
    }
};
