class Solution {
public:
    int threeSumClosest(vector<int> &num, int target) {
        int gap_min=INT_MAX,ret=0;
        sort(num.begin(),num.end());
        for(auto a=num.begin();a!=prev(num.end(),2);++a)
        {
            auto b=next(a),c=prev(num.end());
            while(b<c)
            {
                const int val=*a+*b+*c;
                const int gap = abs(target - val);
                if(gap < gap_min)
                {
                    gap_min = gap;
                    ret = val;
                }
                if(val > target) c--;
                else b++;
            }
        }
        return ret;
    }
};
