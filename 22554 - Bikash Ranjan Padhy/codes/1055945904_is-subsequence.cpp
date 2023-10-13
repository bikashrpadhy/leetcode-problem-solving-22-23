class Solution {
public:
    bool isSubsequence(string sub, string t) 
    {
        if(sub.size()== 0)return true;
        if(t.size()== 0)return false;

        int j=0;
        for(int i=0; i< t.size(); i++)
        {
            if(sub[j]==t[i]) j++;
        }

        return j==sub.size();
    }
};