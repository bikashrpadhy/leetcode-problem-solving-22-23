class Solution {
public:
    bool isHappy(int n) 
    {
        int sum=0, prev_sum, i=10;
        do
        {
            sum=0;
            while(n>0 )
            {
                sum+= (n%10)*(n%10);
                n/= 10;
            }
            cout<< "sum: "<< sum<<endl;
            if(sum==prev_sum) return true;
            n= sum; 
            prev_sum= sum;
            i--;
        }while(i>0);
        return false;        
    }
};