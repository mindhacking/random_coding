class Solution {
public:
    int searchInsert(int A[], int n, int target) {
        return lower_bound(A, A + n, target) - A;
    }
    template<typename ForwardIterator, typename T>
    ForwardIterator lower_bound (ForwardIterator first, ForwardIterator last, T value) {
        while(first!=last)
        {
            auto mid = next(first, distance(first, last) / 2);
            if (value > *mid) first = ++mid;
            else last = mid;
        }
        return first;
    }
};
