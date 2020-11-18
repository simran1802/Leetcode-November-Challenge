class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if(intervals.size()==0)
            return {{}};
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> ans;
        int min_start = intervals[0][0], max_end = intervals[0][1];
        for(int i=0;i<intervals.size();i++){
            if(intervals[i][0] <= max_end)
                max_end = max(max_end,intervals[i][1]);
            else{
                ans.push_back({min_start,max_end});
                min_start = intervals[i][0];
                max_end = intervals[i][1];
            }
        }
        ans.push_back({min_start,max_end});
        return ans;
    }
};
