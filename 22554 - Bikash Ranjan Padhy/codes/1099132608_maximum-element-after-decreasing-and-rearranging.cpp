class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) 
    {
        int n = arr.size();
        if(n==1) return 1;

        sort(arr.begin(), arr.end());
        // int max= arr[n-1];

        if(n< arr[n-1]) return n; 

        for(int i=1; i<n; i++)
            if(arr[i] - arr[i-1] > 1) arr[i]= arr[i-1]+1;

        return arr[n-1];
    }
};