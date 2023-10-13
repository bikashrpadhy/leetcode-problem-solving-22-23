// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        if(n==1) return 1; 
        int l=1,r=n, ans;
        int mid= l+(r-l)/2;
        while(l<=r)
        {
            if(isBadVersion(mid))
            {
                r=mid-1; 
                ans = mid;
            }
            else l=mid+1;
            mid= l+(r-l)/2;
        }
        return ans;        
    }
};