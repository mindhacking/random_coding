class Solution {
public:
    vector<int> searchRange(int A[], int n, int target) {
        int begin=0,end=n-1;
        // lower bound
        int lower = -1;
        while(begin<=end)
        {
            int mid = (begin+end)/2;
            if(target == A[mid]) {
                lower = mid;
                end = mid-1;
            }
            else if (target > A[mid])
            {
                begin = mid+1;
            }
            else end = mid -1;
        }
        int upper = -1;
        begin = 0; end = n-1;
        while(begin<=end)
        {
            int mid = (begin+end)/2;
            if(target == A[mid]) {
                upper = mid;
                begin = mid+1;
            }
            else if (target > A[mid])
            {
                begin = mid+1;
            }
            else end = mid -1;
        }
        vector<int> ret;
        ret.push_back(lower);
        ret.push_back(upper);
        return ret;
    }
    
};
