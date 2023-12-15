class Solution {
private:
    vector<string> vec;

    void backtrack(string curr, int n)//, int idx) //, int &k) 
    {
        if(n== 0)//&& k==0)
        {
            vec.push_back(curr);
            return;
        }

        for(char ch= 'a'; ch<= 'c'; ch++)
        {   
            // cout<<curr.back()<<endl;
            if(curr.empty() || curr.back()!=ch )
            {
                backtrack(curr+ch, n-1);
            }
        }
    }
public:
    string getHappyString(int n, int k) 
    {
        string curr= "";
        backtrack(curr,n);
        if(vec.size()< k) return "";

        return vec[k-1];

        
    }
};