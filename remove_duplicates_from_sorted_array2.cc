class Solution {
public:
    int removeDuplicates(int A[], int n) {
        int cnt = 1,pos=1;
        if(n==0) return 0;
        int prev = A[0];
        for(int i=1;i<n;++i)
        {
            if(A[i] == prev)
            {
                if(cnt < 2) 
                {
                    cnt++;
                    A[pos++]=A[i];
                }
            }
            else //A[i]!=prev
            {
                prev = A[i];
                cnt=1;
                A[pos++]=A[i];
            }
        }
        return pos;
    }
};
