class Solution {
public:
     vector<vector<int>> generate(int numRows)
     {
        vector<vector<int>> ans(numRows, vector<int>());
		ans[0].push_back(1);
        for (size_t i = 1; i < numRows; i++) {
            for (size_t j = 0; j < i + 1; j++) {
                auto value = 1;
                if (0 < j && j < i) {
                    value = ans[i - 1][j - 1] + ans[i - 1][j];
                }

                ans[i].push_back(value);
            }
        }

        return ans;
    }
};