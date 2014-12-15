class Solution {
public:
    bool searchMatrix(vector<vector<int> > &matrix, int target) {
        size_t row = matrix[0].size();
        size_t col = matrix.size();
        size_t begin=0,end=row*col;
        int mid=0;
        while(begin<end)
        {
            mid = (begin+end)/2;
            if (matrix[mid/row][mid%row] == target) return true;
            if (matrix[mid/row][mid%row] > target) end=mid;
            else begin = mid+1;
        }
        return false;
    }
};
