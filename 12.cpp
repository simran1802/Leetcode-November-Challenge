class Solution {
private:
    void helper(vector<int> nums,int start,vector<vector<int>> &perm){
        int n = nums.size();
        if(start == n-1){
            perm.push_back(nums);
        }
        else{
            for(int i=start;i<n;i++){
                if ((i == start) || (nums[i] != nums[start])){
                    swap(nums[i],nums[start]);
                    helper(nums,start+1,perm);      //Backtrack or jumps to next pos
                }
            }
        }
    }
    
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> perm;
        helper(nums,0,perm);
        return perm;
    }
};
