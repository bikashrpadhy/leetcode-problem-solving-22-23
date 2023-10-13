class Solution {
    public int fib(int n) {
        int a=1,b=0,c=0;
        
        if(n==0) return 0;
        if(n==1 || n==2) return 1;
        
        for(int i=1 ; i<n ;i++)
        {
            c= a+b;
            b=a;
            a=c;
            
            
        }
        return c;        
    }
}