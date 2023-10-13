class Solution {
public:
    vector<int> sortedSquares(const vector<int>& nums) {
        if (nums.empty()) {
            return {};
        }
        
        vector<int> squares;
        
        size_t negative_idx = 0;
        size_t positive_idx = nums.size() - 1;
        
        while (negative_idx < positive_idx) {
            int negative_square = nums[negative_idx] * nums[negative_idx];
            int positive_square = nums[positive_idx] * nums[positive_idx];
            if(negative_square > positive_square) {
                ++negative_idx;
                squares.push_back(negative_square);
            } else {
                --positive_idx;
                squares.push_back(positive_square);
            }
        }
        squares.push_back(nums[negative_idx] * nums[negative_idx]);
        
        reverse(squares.begin(), squares.end());
        
        return squares;
    }
};