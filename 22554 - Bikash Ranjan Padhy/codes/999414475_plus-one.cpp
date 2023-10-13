class Solution
{
public:
    vector<int> plusOne(vector<int>& digits)
    {
        vector<int> res;
        int carry = 1;
        for (int i = digits.size() - 1; i >= 0; i--)
        {
            int sum = digits[i] + carry;
            if (sum < 10)
            {
                res.push_back(sum);
                carry = 0;
            }
            else
            {
                res.push_back(0);
                carry = 1;
            }
        }
        if (carry > 0)
            res.push_back(1);

        std::reverse(res.begin(), res.end());

        return res;
    }
};