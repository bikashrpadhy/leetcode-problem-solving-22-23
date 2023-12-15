class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) 
    {
        if(arr.size()==1)return arr[0]==target[0];
        
        sort(target.begin(),target.end()); 
        sort(arr.begin(),arr.end());
        for(int i=0;i<target.size();++i){
            if(target[i]!=arr[i]){
              return false;
            }
        } 
        return true;
    }
};