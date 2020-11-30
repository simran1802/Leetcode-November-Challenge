class Solution {
public:
    vector<vector<int>> getSkyline(vector<vector<int>>& building) {
        if(building.empty())
            return {};
        vector<vector<int>> ans;
        set<pair<int,int>> s;
        for(auto x:building){
            s.insert({x[0],-x[2]});
            s.insert({x[1],x[2]});
        }
        multiset<int> ms;
        ms.insert(0);
        for(auto x:s){
            int prev = *ms.rbegin();
            if(x.second<0)
                ms.insert(-x.second);
            else
                ms.erase(ms.lower_bound(x.second));
            int n = *ms.rbegin();
            if(prev!=n)
                ans.push_back({x.first,n});
            
        }
        return ans;
    }
};
