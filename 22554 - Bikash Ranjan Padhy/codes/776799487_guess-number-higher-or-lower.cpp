/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        if (n==1) return 1;
        
        int l = 1;
        int r = n;
        while (l <= r) {
            int m = l + (r - l) / 2;
            cout<<m<<"  ";
            if (!guess(m)) return m;
            else if (guess(m) ==1) l = m + 1;
            else r = m - 1;
        }
        return -1;
    }
        
    
};