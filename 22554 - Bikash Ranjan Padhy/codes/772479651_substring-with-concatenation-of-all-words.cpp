class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words)    {
        unordered_map<string, int> counts;
        for(auto word : words) 
            counts[word]++;
        int n = s.length(), numWords = words.size(), len = words[0].length();
        vector<int> indexes;
        for (int i = 0; i < n - numWords * len + 1; i++) 
        {
            unordered_map<string, int> seen;
            int j = 0;
            for (; j < numWords; j++) 
            {
                string word = s.substr(i + j * len, len);
                if (counts.find(word) != counts.end()) 
                {
                    seen[word]++;
                    if (seen[word] > counts[word]) break;
                }
                else break;
            }
            if (j == numWords) indexes.push_back(i);
        }
        return indexes;
    }
};