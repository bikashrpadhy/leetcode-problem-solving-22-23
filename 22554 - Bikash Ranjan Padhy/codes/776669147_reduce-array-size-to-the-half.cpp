class Solution {
public:
        struct compare {
    bool operator()(pair<int, int> p1, pair<int, int> p2)
    {
        return p1.second < p2.second;
    }};
    
    int minSetSize(vector<int>& arr) 
    {
        if(arr.size()==2)
        return 1;
        unordered_map<int, int> freq;
        
        for(auto nums: arr) freq[nums]++;
       
         priority_queue<pair<int, int>, vector<pair<int, int>>, compare> pq(freq.begin(), freq.end());
        
        int removed_elements=0, ans=0;
        while(removed_elements< arr.size()/2)
        {
            auto most_freq= pq.top(); pq.pop();
            removed_elements+= most_freq.second;
            // cout<< most_freq.first<<"  ";
            ans++;
        }
        return ans;
        
            
            
        
        
        
    }
};
