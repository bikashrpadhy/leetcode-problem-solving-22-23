class Solution {
public:
    void duplicateZeros(vector<int>& arr) 
    {
        if(arr.size()==1)
        return;

        vector<int> vec;
        for(int n: arr)
        {
            if(n!=0)
            {
                vec.push_back(n);
                continue;
            }
            vec.push_back(n);
            vec.push_back(n);
        }

        int sz= arr.size();
        for(int i=0; i< sz; i++)
        {
            arr[i]= vec[i];
        }
        return;
        vec.clear();
    }
};