class Solution {
public:
    void sortColors(int A[], int n) {
     auto cnt0=0, cnt1=0, cnt2=0;
     for (auto i = 0; i <n; ++i)
     {
         if (A[i] == 0) cnt0++;
         else if (A[i]==1) cnt1++;
         else cnt2++;
     }
     for (auto i = 0; i <n;++i)
     {
         if (i < cnt0) A[i] =0;
         else if (i < cnt0+cnt1) A[i] =1;
         else A[i] = 2;
     }
    }
};
