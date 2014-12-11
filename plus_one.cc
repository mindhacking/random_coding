class Solution {
public:
  vector<int> plusOne(vector<int> &digits) {
    vector<int> ret;
    ret.resize(digits.size());
    int carry = 1;
    for(int i=digits.size()-1;i>=0;i--)
    {
        ret[i] = (digits[i]+carry)%10;
        carry = (digits[i]+carry)/10;
    }
    if (carry) ret.insert(ret.begin(),1);
    return ret;
  }
};
