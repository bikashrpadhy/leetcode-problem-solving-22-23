class Solution {
public:
    string addStrings(string num1, string num2) 
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        // replacing for loops with while loops
        // remove to_string, use reverse in the end
        if(num1.size()==1 && num2.size()==1)
        {
            int n= (num1[0]-'0') + (num2[0]-'0');
            return to_string(n);
        }
        string ans="";
        int sum=0, carry=0, i=num1.size()-1, j=num2.size()-1;
        while(i>=0 && j>=0)
        {
            sum= carry+ (num1[i]-'0')+ (num2[j]-'0');
            // cout<<num1[i]<<endl;
            carry= sum/10;
            ans+= sum%10 + '0';
            i--; j--;
        }
        while(i>=0)
        {
            sum= carry+ (num1[i]-'0');
            carry= sum/10;
            ans+= sum%10 + '0';
            i--;
        }
        while(j>=0)
        {
            sum= carry+ (num2[j]-'0');
            carry= sum/10;
            ans+= sum%10 + '0';
            j--;
        }
        if(carry)ans+= carry + '0';;
        reverse(ans.begin(), ans.end());
        return ans;
    }
};