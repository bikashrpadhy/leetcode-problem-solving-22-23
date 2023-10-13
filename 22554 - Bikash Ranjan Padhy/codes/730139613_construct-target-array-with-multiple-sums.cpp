class Solution {
public:
      bool isPossible(vector<int>& target) 
    {
        long long sum = 0;
        priority_queue<long long> pq;
        
        for(int item : target)
        {
            pq.push((long long)item);
            sum += item;
        }
        
        while(pq.top() != 1)
        {
            long long top = pq.top(); pq.pop();
            
            sum = sum - top;
            
            if(sum <= 0 || sum >= top) return false;
            
            top = top % sum;
            sum += top;
            
            pq.push(top > 0 ? top : sum);
        }
        
        return true;    
    }
};