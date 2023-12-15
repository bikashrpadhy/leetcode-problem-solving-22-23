class Solution {
public:
    string destCity(vector<vector<string>>& paths) 
    {
        if(paths.size()==1) return paths[0][1];

        unordered_set<string> nomins;
        for(int i=0; i<paths.size(); i++)
            nomins.insert(paths[i][0]);
        
        for(int i=0; i<paths.size(); i++)
        {
            if(nomins.find(paths[i][1])== nomins.end())
                return paths[i][1];
        }

        return "";
    }
};