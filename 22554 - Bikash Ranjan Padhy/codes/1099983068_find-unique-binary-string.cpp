class Solution {
private:
    int n;
    string ans{""};
public:
    string findDifferentBinaryString(vector<string>& nums) 
    {
        this->n= nums.size();
        for(int i=0; i< n; i++)
        {
            char curr = nums[i][i];
            ans+= curr =='0'? '1': '0';
        }

        return ans;
    }
};