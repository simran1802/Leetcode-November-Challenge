class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n=nums.size(),max;
        vector<int> res;
        deque<int> dq;
        for(int i=0;i<n;i++){
            
           // checks if element enter is out of window then pop the front element
            if(!dq.empty() && dq.front()==i-k)
                dq.pop_front();
            // checks if element from new window is greater than largest element of prev window. if so than pop the last element
            while(!dq.empty() && nums[dq.back()] < nums[i])
                dq.pop_back();

            dq.push_back(i);
            if(i>=k-1)
                res.push_back(nums[dq.front()]);
        }
        return res;
    }
};
