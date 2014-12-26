class Solution {
public:
    int majorityElement(vector<int> &num) {
        int cnt = 1;
        int ret = num[0];
        for(int i=1;i<num.size();i++)
        {
            if(ret == num[i]) cnt++;
            else 
            {
                cnt--;
                if(cnt<=0) 
                {
                    cnt = 1;
                    ret=num[i];
                }
            }
        }
        return ret;
    }
};
