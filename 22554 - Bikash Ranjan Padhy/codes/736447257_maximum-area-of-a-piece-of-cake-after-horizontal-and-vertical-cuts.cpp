class Solution {
public:
     int mod = 1000000007;
    int maxArea(int h, int w, vector<int>& hi, vector<int>& vi) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        
        sort(hi.begin(), hi.end()); hi.push_back(h); int mxH = hi[0];
        sort(vi.begin(), vi.end()); vi.push_back(w); int mxV = vi[0];
        
        for(int i=1; i<hi.size(); i++)
            mxH = max(mxH, hi[i]-hi[i-1]);
        
        for(int j=1; j<vi.size(); j++)
            mxV = max(mxV, vi[j]-vi[j-1]);
        
        return ((long long)mxH%mod * (long long)mxV%mod)%mod;
    }
};