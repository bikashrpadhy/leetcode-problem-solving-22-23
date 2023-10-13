class Solution {
public:
     bool wordBreak(string s, vector<string>& wordDict) {
        /* 
        
        subproblem i:
        the string of size i can be covered by words in the dictionary
        
        if you know up to which length can be covered...
        
        Try each word in the dictionary and look back the length of the word.
        
        If the dp[i - length] which is the string up to the start of the word you are checking is FALSE,
        then covering this word is useless.
        
        If it is TRUE, then you can try to cover the word with one of the dictionary words.
        
        So at every size, you know if it can be covered.
        
        Therefore, at the end n, you know that the entire string can either be covered or not.
        
        */
        
        //dp array of whether the size can be covered
        vector<bool> dp;
        dp.resize(s.size() + 1, false); //0 - size of the string
        dp[0] = true; //base case, string of size 0 can be covered
        
        //note: they are all initialized to false
        
        //for each size
        for(int i = 1; i <= s.length(); i++){
            
            //try to cover the size with one of the dictionary words
            for(int j = 0; j < wordDict.size(); j++){
                
                //if the word is bigger than the string length I am checking, then skip for now
                if(wordDict[j].length() > i){
                    continue;
                }
                
                //else, check if you can cover the string of size i, USING the current word
                
                //intuition: you added a letter, SO you must cover from the new letter back using at least one of the words... just like coin change logic...
                
                //if the string before it couldn't be covered, stays false
                
                //if it could be covered, try to cover the remaining string of size word you are looking at
                if(dp[i - wordDict[j].length()]){
                                    
                    //if the remaining string equals the dictionary word
                    if(s.substr(i - wordDict[j].length(), wordDict[j].length()) == wordDict[j]){
                        dp[i] = true;
                        break;
                    }
                    
                }
                
            }
            
        }
        
        return dp[s.size()];
        
    }

};
