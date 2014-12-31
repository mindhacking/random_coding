class Solution {
public:
    vector<vector<int> > generateMatrix(int n) {
        vector<vector<int>> ret(n,vector<int>(n));
        if(n==0) return ret;
        int beginX=0,endX=n-1;
        int beginY=0,endY=n-1;
        int cnt = 1;
        while(1)
        {
            for(int i = beginX;i<=endX;++i) ret[beginY][i]=cnt++;
            if(++beginY > endY) break;
            
            for(int i = beginY;i<=endY;++i) ret[i][endX]=cnt++;
            if(--endX < beginX) break;
            
            for(int i = endX;i>=beginX;--i) ret[endY][i]=cnt++;
            if(--endY < beginY) break;
            
            for(int i = endY;i>=beginY;--i) ret[i][beginX]=cnt++;
            if(++beginX > endX) break;
            
        }
        return ret;
    }
};
