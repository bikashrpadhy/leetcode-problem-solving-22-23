class Solution {
public:
        vector<string> letterCasePermutation(string s) {
            vector<string> res = {""};
            for (auto c : s) {
                if (c >= '0' && c <= '9') {
                    for (auto& x : res)
                        x+=c;
                } else {
                    int len = res.size();
                    for (int i = 0; i < len ; i++) {
                        string& x = res[i]; 
                        string y = res[i]; 
                        x+=tolower(c);
                        y+=toupper(c);
                        res.push_back(y);
                    }
                }
            }
            return res;
        }
};