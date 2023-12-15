class Solution {
public:
    string sortVowels(string s) {
        //imp ques
        vector<int>lower(26,0);
        vector<int>upper(26,0);

        for(int i=0;i<s.size();i++){
            //lower
            if(s[i]=='a'||s[i]=='e'||s[i]=='o'||s[i]=='i'||s[i]=='u'){
                   lower[s[i]-'a']++; 
                   s[i]='#';//make it # so it easy to find on which place vowel was there
            }
            //upper
            else if(s[i]=='A'||s[i]=='E'||s[i]=='O'||s[i]=='I'||s[i]=='U'){
                upper[s[i]-'A']++;
                s[i]='#';//make it # so it easy to find on which place vowel was there
            }
        }

        string vowel;
        for(int i=0;i<26;i++){
            char c='A'+i;
            while(upper[i]){
                vowel+=c;
                upper[i]--;
            }
        }
        for(int i=0;i<26;i++){
            char c='a'+i;
            while(lower[i]){
                vowel+=c;
                lower[i]--;
            }
        }
        int first=0,second=0;//second is pointing on string vowel,first is pointing on string s 
        while(second<vowel.size()){
            if(s[first]=='#'){
                s[first]=vowel[second];
                second++;
            }
            first++;
        }
        return s;
    }
};