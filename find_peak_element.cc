class Solution {
public:
    int findPeakElement(const vector<int> &num) {
        int begin = 0, end = num.size()-1;
        if(num.size()==1) return 0;
        int mid;
        while(begin <= end)
        {
            mid = (begin + end) / 2;
            if(mid == 0)
            {
                if (num[mid]>num[mid+1]) return mid;
                return mid+1;
            }
            
            if(mid == num.size()-1)
            {
                if(num[mid]>num[mid-1]) return mid;
                return mid-1;
            }
            
            if (num[mid] > num[mid-1] && num[mid]>num[mid+1]) return mid;
            else if (num[mid] < num[mid-1] && num[mid]>num[mid+1]) end = mid-1;
            else begin = mid+1;
        }
        return mid;
    }
};
