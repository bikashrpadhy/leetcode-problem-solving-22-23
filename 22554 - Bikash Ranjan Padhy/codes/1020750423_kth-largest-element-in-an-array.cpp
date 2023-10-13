class Solution {
public:
    // void showpq( priority_queue<int, vector<int>, greater<int> > g)
    // {
    //     while (!g.empty()) {
    //         cout << ' ' << g.top();
    //         g.pop();
    //     }
    //     cout << '\n';
    // }
    int findKthLargest(vector<int>& nums, int k) 
    {
        priority_queue<int> pq;
        // , vector<int>, greater<int>>
        for(auto n: nums) pq.push(n);
        // showpq(pq);

        while(k>1) k--, pq.pop();
        return pq.top();        
    }
};