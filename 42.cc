class Solution {
public:
    int trap(int A[], int n) {
        int ret=0;
        int* max_left = new int[n]();
        int* max_right = new int[n]();
        
        for(int i=1;i<n;++i)
        {
            max_left[i] = max(max_left[i-1],A[i-1]);
            max_right[n-1-i] = max(max_right[n-i],A[n-i]);
        }
        
        for(int i=0;i<n;++i)
        {
            int height = min(max_left[i],max_right[i]); 
            if(height>A[i])
            ret+=height-A[i];
        }
        delete[] max_left;
        delete[] max_right;
        return ret;
    }
};
