class Solution {
public:
    int largestRectangleArea(vector<int> &h) {
        stack<int> s;
        h.push_back(0);
        int sum=0;
        for(int i=0;i<h.size();)
        {
            if(s.empty()||h[s.top()]<h[i]) s.push(i++);
            else
            {
                int tmp = s.top();
                s.pop();
                sum = max(sum, h[tmp]*(s.empty()? i : i-s.top()-1));
            }
        }
        return sum;
    }
};
