class Solution {
public:
      bool canConstruct(string ransomNote, string magazine) {
        
        vector<int> alpha(26,0);
          
        //counting   
        for(const char &note : ransomNote){
            alpha[note-'a']+=1;
        }
          
        //decrementing matching character's counts
        for(const char &ch : magazine){
            alpha[ch-'a']-=1;
        }
        
        //checking for mismatches
        for(int i=0;i<26;i++){
            
            if(alpha[i]>0){ return false;}
        }
            
        return true;
    }
};