
class Solution {
public:
     int minPartitions(string n) {
        int mx = 0, len= n.size();
         
        for(int i=0; i<len ; i++)
        {
            if (n[i] == 9) return 9;           
            mx = max(mx, n[i] - '0');
        }
        return mx;     
    }
};