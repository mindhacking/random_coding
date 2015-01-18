class Solution {
public:
    int reverse(int x) {
        int ret=0;
        if(x==INT_MIN) return 0;
        bool sign = x>0?true:false;
        x=abs(x);
        while(x>=10)
        {
            ret+=x%10;
            if(ret>INT_MAX/10) return 0;
            ret*=10;
            x=x/10;
        }
        ret+=x;
        return sign?ret:-ret;
    }
};
