class Solution {
public:
    int maxSubArray(int A[], int n) {
        int f=0;
        int ret=INT_MIN;
        for(int i=0;i<n;++i)
        {
            f=max(f+A[i],A[i]);
            ret=max(f,ret);
        }
        return ret;
    }
};
