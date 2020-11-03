class Solution {
public:
    int maxPower(string s) {
        if(s.size()==0)
            return 0;
        int max_len = 1, count=1;
        for(int i=1;i<s.size();i++){
            if(s[i] == s[i-1])
                count++;
            else{
                max_len = max(max_len,count);
                count=1;
            }
        }
        return max(max_len,count);
    }
};
