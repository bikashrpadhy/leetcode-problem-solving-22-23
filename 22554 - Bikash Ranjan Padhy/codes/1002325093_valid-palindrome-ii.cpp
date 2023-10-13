class Solution {
public:
    bool validPalindrome(string s) 
    {
        bool palindrome=true;
        int i,j, break_i, break_j;
        for(i=0, j=s.size()-1; i<j; i++, j--)
        {
            if(s[i]!=s[j]) 
            {
                palindrome=false;
                break_i= i;
                break_j= j;
                break;

            }
        }
        if(palindrome) return true;

        bool forward=true, backward=true;
        for(i=break_i +1; i<j; i++, j--)
        {
            if(s[i]!= s[j]) forward= false;
        }
        i=break_i;
        for(j=break_j-1; i<j; i++, j--)
        {
            if(s[i]!= s[j]) backward= false;
        }
        return forward || backward;
    }
};