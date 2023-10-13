
class Solution {
    public boolean isPowerOfThree(int n) 
    {
        // double lg10INTMAX= Math.log10(Integer.MAX_VALUE), lg3= Math.log10(3);
        int biggest_pow3= 1162261467;
        return n>0 && biggest_pow3 % n==0;

        // System.out.println(lg3_INTMAX);
            
        
    }
}