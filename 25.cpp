class Solution {
public:
    int smallestRepunitDivByK(int K) {
        if(K%2==0 && K%5==0)
            return -1;
        int prev_rem = 0;
        for(int n=1;n<=K;++n){
            prev_rem = (prev_rem*10+1)%K;
            if(prev_rem==0)
                return n;
        }
        return -1;
    }
};
