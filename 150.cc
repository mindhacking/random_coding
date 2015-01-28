class Solution {
private:
    bool isOperator(string s)
    {
        if(s=="+"||s=="-"||s=="*"||s=="/") return true;
        return false;
    }

public:
    int evalRPN(vector<string> &tokens) {
        stack<int> s;
        for (int i=0;i<tokens.size();++i) {
            if(!isOperator(tokens[i]))
            {
                s.push(stoi(tokens[i]));
            }
            else
            {
                int op1 = s.top();
                s.pop();
                int op2 = s.top();
                s.pop();
                if(tokens[i] == "+") 
                    s.push(op1+op2);
                else if(tokens[i] == "-")
                    s.push(op2-op1);
                else if(tokens[i] == "*")
                    s.push(op1*op2);
                else
                    s.push(op2/op1);
            }
        }
        return s.top();
    }
};
