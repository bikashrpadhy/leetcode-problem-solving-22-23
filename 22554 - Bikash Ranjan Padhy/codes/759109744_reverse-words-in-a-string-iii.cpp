class Solution {
public:
    string reverseWords(string s) {
        int prev_whitespace=-1, n= s.size();
        for(int i=0; i<=n; i++)
        {
            if(i==n || s[i]==' ')
            {
                int start =prev_whitespace+1;
                int end= i-1;
                
                reverse(s.begin()+start, s.begin()+end+1);
                // while(start< end)
                // {
                //     char temp=s[start];
                //     s[start]= s[end];
                //     s[end]=temp;
                //     start++; end--;
                // }
                prev_whitespace=i;
            }
        }
        return s;
    }
};