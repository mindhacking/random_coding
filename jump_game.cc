class Solution {
public:
    bool canJump(int A[], int n) {
        int reach = 1; // rightmost range
        for(int i = 0; i < reach && reach < n; ++i)
            reach = max(reach, A[i]+i+1);
        return reach>=n;
        
    }
};
