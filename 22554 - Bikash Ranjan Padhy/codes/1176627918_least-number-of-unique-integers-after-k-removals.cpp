class Solution {
public:
    typedef pair<int, int> p;
    bool cmp(int &a, int &b){return a<b;}

    int findLeastNumOfUniqueInts(vector<int>& arr, int k) 
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        
        int n= arr.size(), cnt=0;

        unordered_map<int, int> mp;
        for(int m: arr)mp[m]++;

        vector<pair<int, int>> vec(mp.begin(), mp.end());
        sort(vec.begin(), vec.end(),[](p&a, p&b){return a.second<b.second;});

        for(auto iter= vec.begin(); k && iter!= vec.end(); iter++)
            while(iter->second && k)
            {
                k--;
                iter->second--;
            }

        for(auto iter= vec.begin(); iter!= vec.end(); iter++)
            if(iter->second) cnt++;
        
        return cnt;
    }
};