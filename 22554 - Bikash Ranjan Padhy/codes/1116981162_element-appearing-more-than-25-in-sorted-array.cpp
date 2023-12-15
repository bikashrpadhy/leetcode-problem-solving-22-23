class Solution {
public:
    int findSpecialInteger(vector<int>& arr) 
    {
        if(arr.size()==1) return arr[0];
        if(arr.size()<=4)
        {//find the element with more than 1 occurence
            for(int i=1; i< arr.size(); i++) 
                if(arr[i]==arr[i-1])
                    return arr[i];
        }

        int x1= arr[0], c1=1, th= arr.size()/4;
        for(int i=1; i<arr.size(); i++)
        {
            if(arr[i]== x1)
            {
                c1++;
                // cout<< "x1: "<<x1<<", c1: "<<c1<<endl;
                if(c1> th) return x1;
            }
            else { x1= arr[i]; c1=1; }
        }
        return x1;
    }
};