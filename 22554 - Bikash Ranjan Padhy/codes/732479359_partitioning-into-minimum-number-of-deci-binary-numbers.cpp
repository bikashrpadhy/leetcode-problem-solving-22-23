
class Solution {
public:
     int minPartitions(string n) {
        int mx = 0;
        for(int i=0; i<n.size(); i++)
            mx = max(mx, n[i] - '0');
        return mx;     
    }
};