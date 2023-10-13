class Solution {
public:
    bool isPalindrome(int x) {
            long int rev = 0, xCopy = x;
            while (xCopy > 0) { rev = rev * 10 + xCopy % 10; xCopy /= 10; } 
            return (rev == x && xCopy > -1); 
        }
};