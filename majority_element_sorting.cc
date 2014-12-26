class Solution {
public:
    int majorityElement(vector<int> &num) {
        int ret;
        sort(num.begin(),num.end());
        int cnt = 1;
        for(int i = 1; i < num.size(); ++i)
        {
            if(num[i] == num[i-1]) cnt++;
            else cnt = 1;
            if(cnt>num.size()/2) return num[i];
        }
        return num[0];
    }
}; 
