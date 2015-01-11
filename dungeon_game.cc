class Solution {
public:
    int calculateMinimumHP(vector<vector<int> > &dungeon) {
        int col = dungeon[0].size();
        int row = dungeon.size();
        for(int i = row-1; i>=0; --i)
            for(int j = col-1; j>=0; --j)
            {
                if(j==col-1&&i==row-1) {
                    dungeon[i][j] = max(1,1-dungeon[i][j]);
                    continue;
                }
                int f1 = j==col-1? INT_MAX : -dungeon[i][j] + dungeon[i][j+1];
                int f2 = i==row-1? INT_MAX : -dungeon[i][j] + dungeon[i+1][j];
                dungeon[i][j] = max(1,min(f1,f2));
            }
        return dungeon[0][0];
    }
};
