class Solution {
private:
    bool intersecting(vector<int> inter1, vector<int> inter2)
    {
        int start= max(inter1[0], inter2[0]);
        int end= min(inter1[1], inter2[1]);
        return start<=end;
    }
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) 
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        
        if(intervals.size()==0)return {newInterval};
        vector<vector<int>> ans;
        int n= intervals.size(), i=1;
        ans.push_back(intervals[0]);
        
        while(i<n && !intersecting(newInterval, ans.back())) 
            ans.push_back(intervals[i++]);
        
        i--; 
        ans.pop_back();
        // at this point, newInterval and some interval 
        // in intervals have an overlap. 
        // We'll push newInterval into ans and check for overlaps
        // with upcoming intervals[i++]

        ans.push_back(newInterval);
        while(i<n && intersecting(intervals[i], ans.back()))
        {
            int start= min(intervals[i][0], ans.back()[0]);
            int end= max(intervals[i][1], ans.back()[1]);
            // cout<< "pushing: "<< start<< ", "<<end<<endl;
            ans.pop_back();
            ans.push_back({start, end});
            i++;
        }
        while(i<n) ans.push_back(intervals[i++]);
        sort(ans.begin(), ans.end());
        return ans;
    }
};