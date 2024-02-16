class Solution {
// private:
//     bool intersecting(const vector<int>& inter1, const vector<int>& inter2)
//     {
//         int start= max(inter1[0], inter2[0]);
//         int end= min(inter1[1], inter2[1]);
//         return start<=end;
//     }
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) 
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        
        if(intervals.size()==0)return {newInterval};
        vector<vector<int>> ans;
        int n= intervals.size(), i=0;
        
        while(i<n && newInterval[0]> intervals[i][1]) 
            ans.push_back(intervals[i++]);
        
        // at this point, newInterval and some interval 
        // in intervals have an overlap. 
        // We'll update start and end of overlapping intervals 
        // by checking with upcoming intervals[i++]
        // before pushing into ans 

        while(i<n && newInterval[1]>=intervals[i][0])
        {
            newInterval[0]= min(intervals[i][0], newInterval[0]);
            newInterval[1]= max(intervals[i][1], newInterval[1]);
            // cout<< "newInterval[0], newInterval[1]: "<< newInterval[0]<< ", "<<newInterval[1]<<endl;
            i++;
        }
        ans.push_back(newInterval);

        while(i<n) ans.push_back(intervals[i++]);
        return ans;
    }
};