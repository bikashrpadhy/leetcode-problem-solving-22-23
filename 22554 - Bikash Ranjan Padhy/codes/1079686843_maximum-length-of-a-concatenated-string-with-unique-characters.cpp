class Solution {
private:
    int len{0}, n;
    void checkLen(string str, vector<string> &arr, int itr) 
    {
        if (!isUnique(str)) return;
        if (str.size() > len) len = str.size();
        for (int i = itr; i < n; i++)
            checkLen(str+arr[i], arr, i+1);
    }
    
    bool isUnique(string word) {
        set<char> st;
        for (auto ele : word) {
            if (st.find(ele) != st.end()) return false;
            st.insert(ele);
        }
        return true;
    }

public:
    int maxLength(vector<string>& arr) 
    {
        n = arr.size();
        checkLen("", arr, 0);
        return len;
    }
    
    
};