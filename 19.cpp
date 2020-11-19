class Solution {
public:
    string helper(const string &s,int &pos){
        string res;
        while(pos<s.length() && s[pos]!=']'){
            if(!isdigit(s[pos]))
                res += s[pos++];
            else{
                int n=0;
                while(pos<s.length() && isdigit(s[pos]))
                    n = n*10 + s[pos++] - '0';
                pos++;
                string temp = helper(s,pos);
                pos++;
                while(n-- > 0)
                    res+=temp;
                
            }
        }
        return res;
    }
    string decodeString(string s) {
        int pos=0;
        return helper(s,pos);
    }
};
