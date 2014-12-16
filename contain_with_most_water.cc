class Solution {
public:
    int maxArea(vector<int> &height) {
        int ret = INT_MIN;
        int start = 0, end = height.size()-1;
        while(start<end)
        {
            int cur = height[start]>height[end]?(end-start)*height[end--]:(end-start)*height[start++];
            ret = max(cur,ret);
        }
        return ret;
    }
};
