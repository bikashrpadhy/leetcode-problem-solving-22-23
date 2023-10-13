#include <cmath>

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    map<int,int> m;
    double ans=0;
    for(auto i:nums1)
    {
        m[i]++;
    }
    for(auto i:nums2)
    {
        m[i]++;
    }
    vector<int> v;
    for(auto i:m)
    {
        while(i.second--)
        {
            v.emplace_back(i.first);
        }
    }
    int n=v.size();
    if(n%2==1)
    {
        ans=v[n/2];
    }
    else
    {
        double sum=v[(n/2)-1]+v[(n/2)];
        ans=sum/2;
    }
    return ans;
}

};