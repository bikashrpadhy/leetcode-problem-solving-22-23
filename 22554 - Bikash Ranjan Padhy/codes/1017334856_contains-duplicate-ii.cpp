class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) 
    {
        if(k==0)return false;
        set<int> st;
        for(int i=0; i< nums.size(); i++)
        {
            // cout<<"in the for loop"<<endl;
            if(i>k) st.erase(nums[i-k-1]);
            // cout<< "size of the set: "<<st.size()<<endl;

            // for (auto it = st.begin(); it != st.end(); it++)  
            //     cout << *it << " ";  
            // cout<<endl;

            if(st.find(nums[i])!=st.end()) // found 
            return true;
            st.insert(nums[i]);
            
        }
        return false; 
    }
};