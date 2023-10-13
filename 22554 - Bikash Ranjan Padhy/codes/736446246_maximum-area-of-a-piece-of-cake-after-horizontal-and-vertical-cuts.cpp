class Solution {
public:
  int maxArea(int h, int w, vector<int>& hc, vector<int>& vc) {
     hc.push_back(0);
     hc.push_back(h);
     vc.push_back(0);
     vc.push_back(w);
     sort(hc.begin(),hc.end());
     sort(vc.begin(),vc.end());
     int mx1=0;
     int mx2=0;
     for(int i{1};i<hc.size();i++){
         mx1=max(mx1,hc[i]-hc[i-1]);
     }
     for(int i{1};i<vc.size();i++){
         mx2=max(mx2,vc[i]-vc[i-1]);
     }
     return (long)mx1*mx2%1000000007;
    }
};