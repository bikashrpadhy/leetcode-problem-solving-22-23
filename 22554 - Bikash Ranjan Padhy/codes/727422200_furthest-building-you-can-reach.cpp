class Solution {
public:
          int furthestBuilding(vector<int>& h, int bricks, int ladders) {
        priority_queue<int,vector<int>,greater<int>> q;
        int n = h.size();
        for(int i = 1;i<n;i++){
            if(h[i] <= h[i - 1]) continue;
            q.push(h[i] - h[i - 1]);
            if(q.size() > ladders){
                bricks -= q.top();
                q.pop();
                if(bricks < 0) return i - 1;
            }
        }
        return n - 1;
    }
};