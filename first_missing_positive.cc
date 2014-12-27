class Solution {
public:
    static void bucket_sort(int A[], int n)
    {
        for (auto i = 0; i < n; ++i)
        {
            while(A[i]!=i+1)
            {
                if(A[i] <= 0 || A[i] > n || A[i] == A[A[i]-1])
                    break;
                swap(A[i],A[A[i]-1]);
            }
        }
        
    }
    int firstMissingPositive(int A[], int n) {
        bucket_sort(A,n);
        for (auto i = 0; i < n; ++i)
            if (A[i]!=(i+1))
                return i+1;
        return n+1;
    }
};
