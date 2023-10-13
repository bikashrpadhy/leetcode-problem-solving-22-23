class Solution {
public:
string convert(string s, int numRows) 
    {
        string result = ""; 
        int maxJump = (numRows - 1) * 2; 
        if(maxJump == 0) 
        {
            return s;
        }
        int pattern1 = maxJump; 
        int pattern2 = 0; 

        for(int i = 0; i < numRows; i++)
        {

            pattern1 = maxJump - 2 * i;
            pattern2 = maxJump - pattern1;
                        
            int j = i;
            
            while(j < s.length())
            {
                result += s[j];
                
                j += (pattern1 == 0 ? pattern2 : pattern1);
                if(j < s.length())
                {                    
                    result += s[j];
                    j += (pattern2 == 0 ? pattern1 : pattern2);
                }
            }
        }
        
        return result;
    }
};