class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& inters, vector<int>& newinter) 
    {
        int n= inters.size(), i;
        vector<vector<int>> ans;
        for(i=0; i<n && inters[i][1]< newinter[0]; i++)
            ans.push_back(inters[i]);

        while(i<n && newinter[1]>= inters[i][0])
        {
            newinter[0]= min(newinter[0], inters[i][0]); 
            newinter[1]= max(newinter[1], inters[i][1]);
            i++;
        }
        ans.push_back(newinter);
        for(; i<n; i++) ans.push_back(inters[i]);

        return ans;
    }
};