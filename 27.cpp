class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int n=nums.size(), sum=0;
        for(int i=0;i<n;i++)
            sum += nums[i];
        int target=sum/2;
        if(sum%2!=0)
            return false;
        vector<int> dp(target+1,0);
        dp[0]=1;
        for(auto num:nums){
            for(int i=target;i>=num;i--)
                dp[i] = dp[i] || dp[i-num];
            
        }
        return dp[target];
    }
};
