class Solution {
public:
    double findMedianSortedArrays(int A[], int m, int B[], int n) {
        int total = m + n;
        if (total == 1) return m==1?A[0]:B[0];
        if (total&0x1)
            return find_kth(A,m,B,n,total/2+1);
        else return (find_kth(A, m, B, n, total/2) +find_kth(A, m, B, n, total/2+1))/2.0 ;
    }
    static int find_kth(int A[], int m, int B[], int n, int k)
    { // assume m is equal or smaller than
        if (m>n) return find_kth(B, n, A, m, k);
        if (m==0) return B[k-1];
        if (k==1) return min(A[0],B[0]);
        int ia = min(k/2, m), ib = k - ia;
        if (A[ia-1] == B[ib-1]) return A[ia-1];
        else if (A[ia-1] < B[ib-1])
            return find_kth(A+ia, m-ia, B, n, k-ia);
        else
            return find_kth(A, m, B+ib, n-ib, k-ib);
    }
};
