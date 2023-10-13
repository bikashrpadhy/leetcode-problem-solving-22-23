class Solution {
public:
    string convertToTitle(int colno) 
    {
        string ans;
        while(colno)
        {
            colno--;
            ans.push_back(colno%26+'A');
            colno/=26;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};