class Solution {
public:
    int minOperations(vector<string>& logs) 
    {
        int count=0;
        for(int i=0; i<logs.size(); i++)
        {
            if(logs[i]== "../") count= count>0? count-1 : 0;
            else if(logs[i]== "./") {}
            else count++;
        }
        return count>0 ? count: 0;
    }
};