class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) 
        {
        if(words.size() == 1)return 1;

        vector<string> mcodes{".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};

        vector<string> trans;
        string mword="";
        for(int i=0; i<words.size(); i++)
        {
            string word= words[i];
            // cout<<"word is: "<<word<<endl;
            mword="";
            for(int j=0; j<word.size(); j++)
            {
                mword+= mcodes[word[j]-'a'];
            }

            trans.push_back(mword);
            // cout<<"mword is: "<<mword <<endl;
        }
        sort(trans.begin(), trans.end());

        vector<string>::iterator itr=std::unique(trans.begin(), trans.end());
//         trans.resize(std::distance(trans.begin(), itr));
        // for(auto mstr: trans)
        //     cout<<mstr <<endl;
//        return trans.size();
        return std::distance(trans.begin(), itr);
    }
};