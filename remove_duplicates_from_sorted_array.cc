class Solution {
public:
    int removeDuplicates(int A[], int n) {
        if(n<2) return n;
        int pos=1;
        for(int iter=1;iter<n;iter++)
        {
            if(A[pos-1]!=A[iter])
                A[pos++]=A[iter];
        }
        return pos;
    }
};
