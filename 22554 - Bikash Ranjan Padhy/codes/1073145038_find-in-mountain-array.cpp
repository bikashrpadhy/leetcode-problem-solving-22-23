/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int findInMountainArray(int targ, MountainArray &mount) 
    {
        // (1) Binary Search to find mountain peak,
        // (2) Binary Search to find target in left part
        // (3) Binary Search to find target in right part.
        if(targ< mount.get(0)&& targ< mount.get(mount.length()-1)) return -1;
        
        int l = 0, r = mount.length()-1, m;
        while(l<r)
        {
            m= l+ (r-l)/2;
            if(mount.get(m)< mount.get(m+1)) l = m+1;

            else r = m;
        }
        int peakidx = r;
        // cout<<"peakidx: "<<peakidx<<endl;
        // search in left half
        l = 0; r = peakidx;
        while(l<r)
        {
            m = l+ (r-l)/2;
            int elm = mount.get(m);
            if(elm == targ) return m;

            if(elm< targ) l= m+1;
            else r = m;
        }
        // if(mount.get(l)==targ) return l;
        // search in right half
        l = peakidx; r = mount.length()-1;
        while(l<r)
        {
            m = l+(r-l)/2;
            int elm = mount.get(m);
            if(elm == targ) return m;

            if(elm<targ) r= m;
            else l = m+1;
        }
        if(mount.get(r)== targ) return r;
        else return -1;
    }
};