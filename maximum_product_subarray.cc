class Solution {
public:
    int maxProduct(int A[], int n) {
		int curMax = A[0];
		int curMin = A[0];
		int ret = A[0];
		for(int i=1;i<n;i++){
		    int tmp_max = max(curMax*A[i],curMin*A[i]);
		    int tmp_min = min(curMax*A[i],curMin*A[i]);
            curMax = max(A[i],tmp_max);
            curMin = min(A[i],tmp_min);
            ret = max(curMax,ret);
		}
		return ret;
    }
};
