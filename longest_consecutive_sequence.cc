class Solution {
public:
    int longestConsecutive(vector<int> &num) {
        unordered_map<int, bool> used;
        for (int i=0;i<num.size();++i) used[num[i]] = false;
        int maxlen = 0;
        for (int i=0;i<num.size();++i)
        {
            if (used[num[i]]) continue;
            int length=1;
            for (int j = num[i]+1; used.find(j)!=used.end(); j++)
            {
                used[j] = true;
                length++;
            }
            for (int j = num[i]-1; used.find(j)!=used.end(); j--)
            {
                used[j] = true;
                length++;
            }
            maxlen = max(length, maxlen);
        }
        return maxlen;
    }
};
