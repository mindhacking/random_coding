class Solution {
public:
    vector<vector<int> > generate(int numRows) {
        vector<vector<int> > res;
        vector<int> array;
        if(numRows==0) return res;
        res.push_back(vector<int>(1,1));
        for(int i = 1; i < numRows; i++)
        {
            array.push_back(1);
            for(int j=i-1;j>0;j--)
            {
              array[j]+=array[j-1];
            }
            res.push_back(array);
        }
        return res;
    }
};
