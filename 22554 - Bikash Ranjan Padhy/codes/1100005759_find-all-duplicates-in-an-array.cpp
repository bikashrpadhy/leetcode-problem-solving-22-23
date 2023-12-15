class Solution {
public:
    vector<int> findDuplicates(vector<int>& A) {
        vector<int> v;
        for(int a : A)
        {
            a = abs(a);
            if(A[a - 1] < 0)
                v.push_back(a);
            else A[a - 1] *= -1;
        }
        return v;
    }
};