class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> chars(128);

        int left = 0,right = 0, res = 0;
        char r,l;
        while (right < s.length()) 
        {
            r = s[right];
            chars[r]++;

            while (chars[r] > 1) 
            {
                l = s[left];
                chars[l]--;
                left++;
            }

            res = max(res, right - left + 1);

            right++;
        }
        cout<< s[left] << ","<< s[right] <<endl;
        return res;
    }
};