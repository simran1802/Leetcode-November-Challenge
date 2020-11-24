class Solution {
public:
    int calculate(string s) {
        stack<int> stk;
        int a;
        istringstream ss(s);
        char op='+';
        while(ss >> a){
            if(op=='+' || op=='-')
                stk.push(op=='+' ? a : -a);
            else{
            int last = stk.top();
            stk.pop();
            if(op=='*' || op=='/')
                last = (op=='*' ? last*a : last/a);
             stk.push(last);
            }
            ss>>op;
        }
        int res=0;
        while(!stk.empty()){
            res += stk.top();
            stk.pop();
        }
        return res;
    }
};
