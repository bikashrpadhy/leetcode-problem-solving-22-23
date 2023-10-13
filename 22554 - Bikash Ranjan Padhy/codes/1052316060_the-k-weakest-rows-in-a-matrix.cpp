// optimising using the fact that 1's are ahead of 0's in all rows
class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) 
    {
        priority_queue<pair<int,int>,vector<pair<int,int>>, greater<pair<int,int>>> pq;
        int n= mat.size(), m= mat[0].size();

        for(int i=0; i< n; i++) 
        {
            int j=0;
            while( j< m && mat[i][j])
                j++;
            
            pq.push(make_pair(j,i));
        }
        vector<int> ans;
        while(k--)
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};