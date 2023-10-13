
class Solution {
public:
     int minPartitions(string n) {
        int mx = 0;
        for(int i=0; i<n.size(); i++)
        {
            if (n[i] == 9) return 9;           
            mx = max(mx, n[i] - '0');
        }
        return mx;     
    }
};