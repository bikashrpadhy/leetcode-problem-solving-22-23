class Solution {
public:
    bool isPalindrome(int x) 
    {
        if(x<0 || (x%10==0 && x!=0)) return false;
        long int rev = 0; //, xCopy = x;
        while (x > rev) { rev = rev * 10 + x % 10; x/= 10; } 
        return rev == x || x == rev/10; 
    }
};