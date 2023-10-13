class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) 
    {
        int cnt=0; 
        for(auto time: hours)
        {
            if(time>= target)cnt++;
        }
        return cnt;
        
    }
};