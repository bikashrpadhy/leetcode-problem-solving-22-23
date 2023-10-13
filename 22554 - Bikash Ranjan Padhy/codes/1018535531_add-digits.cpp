class Solution {
public:
    int addDigits(int n) 
    {
        if(n<10) return n;
        int sum;
        while(n>=10)
        {
            sum=0;
            while(n)
            {
                sum+= n%10;
                n/=10;
            }
            n= sum; 
        }
        return sum;
    }

};