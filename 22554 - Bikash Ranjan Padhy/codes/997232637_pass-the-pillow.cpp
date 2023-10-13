class Solution {
public:
    int passThePillow(int n, int time) 
    {
        if(time==1) return 2;

        time= time%(2*n-2);

        if(time<n-1) return 1+time;

        if(time>n-1) return 2*n-1-time;
        else return n;

        
    }
};