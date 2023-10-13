class Solution {
public:
    int peakIndexInMountainArray(vector<int>& a) 
    {
        // vector<int> a({0,10,5,2});
        int l=0, r= a.size()-1;
        int mid= l+(r-l)/2;

        while(l<r)        
        {
            mid= l+(r-l)/2;
            // cout<< "mid: "<< mid<<endl;
            if(a[mid]< a[mid+1]) l= mid+1;
            
            else r=mid;
        }
        
        // cout<< r<<endl;
        return r;
    }
};