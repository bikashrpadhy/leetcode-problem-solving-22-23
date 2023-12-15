class Solution {
public:
    bool isPowerOfFour(int n) 
    {
        return n>0 && (n&(n-1))==0 && (n&0x55555555);
		// 5 is "0101" so n&0x55555 ensure that set bit is at the even position.
		// so if n is power of 2 and set bit is at even position -> n is power of 4
    }
};