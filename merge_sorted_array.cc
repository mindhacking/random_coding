class Solution {
public:
    void merge(int A[], int m, int B[], int n) {
        int pos_a = m-1, pos_b = n-1, icur = m+n-1;
        while(pos_a>=0 && pos_b>=0)
            A[icur--] = A[pos_a]>B[pos_b]?A[pos_a--]:B[pos_b--];
        while(pos_b>=0) A[icur--] = B[pos_b--];
    }
};
