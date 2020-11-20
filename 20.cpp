class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n = nums.size(),mid;
        int left=0, right=n-1;
        while(left<=right){
            mid = left+(right-left)/2;
            if(nums[mid]==target)
                return true;
            if(nums[left]==nums[mid] && nums[right]==nums[mid])
                ++left, --right;
            else if(nums[left] <= nums[mid]){
                if((nums[left]<=target) && nums[mid]>target)
                    right=mid-1;
                else
                    left=mid+1;
            }
            else{
                if((target>nums[mid]) && target<=nums[right])
                    left=mid+1;
                else
                    right=mid-1;
            }
        }
        return false;
    }
};
