ass Solution {
public:
    bool search(int A[], int n, int target) {
        int begin = 0;
        int end = n-1;
        while(begin<=end)
        {
            int mid = (begin+end)/2;
            if(A[mid]==target) return true;
            else if(A[begin] < A[mid])
            {
                if(A[begin] <= target && target < A[mid]) end = mid - 1;
                else begin=mid+1;
            }
            else if(A[begin] > A[mid])
            {
                if(A[mid]< target && target <= A[end]) begin = mid + 1;
                else end = mid - 1;
            }
            else begin++;
        }
        return false;
    }
};
