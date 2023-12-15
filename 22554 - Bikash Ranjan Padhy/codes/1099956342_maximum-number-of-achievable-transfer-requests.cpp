class Solution {
private:
    int maxc{0}, n;
    void backtrack(vector<vector<int>> &requests, int idx, int currmax, vector<int> &builds)
    {
        if(idx==n)
        {
            for(int i: builds) if(i) return;
            // an unbalanced building found

            maxc= max(currmax, maxc);
            return;
        }
        int from= requests[idx][0];
        int to= requests[idx][1];
        
        builds[from]--; builds[to]++;
        backtrack(requests, idx+1, currmax+1, builds);// includes 

        builds[from]++; builds[to]--;
        backtrack(requests, idx+1, currmax, builds); // doesnt include
    }
public:
    int maximumRequests(int n, vector<vector<int>>& requests) 
    {
        this->n = requests.size();
        // if(n==1)return 0;
        vector<int> builds(n,0);
        backtrack(requests, 0, 0, builds);
        
        return maxc;        
    }
};