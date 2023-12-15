class Solution {
private:
    int cnt, n;
    void backtrack(string &tiles, vector<bool> &seen)
    {
        for(int i=0; i<n; i++)
        {
            if(seen[i] || (i>0 && !seen[i-1] && tiles[i]== tiles[i-1]))
                continue;
            cnt++;
            seen[i]= true;
            backtrack(tiles, seen);
            seen[i]=false;
        }

    }
public:
    int numTilePossibilities(string tiles) 
    {
        this->n = tiles.size();
        this->cnt = 0;
        vector<bool> seen(n,false);
        sort(tiles.begin(), tiles.end());
        backtrack(tiles, seen);
        return cnt;
    }
};