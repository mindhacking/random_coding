class Solution {
public:
    int trailingZeroes(int n) {
        int ret=0;
        int div = 1;
        while(div <= n/5)
        {
            ret+=n/div/5;
            div*=5;
        }
        return ret;
    }
};

