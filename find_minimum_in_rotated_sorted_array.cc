class Solution {
public:
    int findMin(vector<int> &num) {
        int begin = 0, end = num.size()-1, mid=0;
        while(begin<end)
        {
            mid = (begin+end)/2;
            if(num[begin]<=num[mid]&&num[mid]<=num[end]) end = mid - 1;
            else if(num[begin]<=num[mid]&&num[mid]>=num[end]) begin = mid + 1;
            else end = mid;
        }
        return min(num[begin],num[end]);
    }
};
