class Solution {
public:
    int minPathSum(vector<vector<int> > &grid) {
        int row_num = grid.size();
        int col_num = grid[0].size();
        for(int i=1;i<col_num;i++) grid[0][i]+=grid[0][i-1];
        for(int i=1;i<row_num;i++) grid[i][0]+=grid[i-1][0];
        for(int i=1;i<row_num;i++)
            for(int j=1;j<col_num;++j)
            {
                grid[i][j] += min(grid[i-1][j],grid[i][j-1]);
            }
        return grid[row_num-1][col_num-1];
    }
};
