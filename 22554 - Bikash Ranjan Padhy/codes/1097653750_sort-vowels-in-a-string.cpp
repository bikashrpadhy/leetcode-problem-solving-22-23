class Solution {
private:
    vector<char> vowels= {'A','E','I','O','U','a','e','i','o','u'};
    map<char, int> vecfreq;
    
public:
    string sortVowels(string s) 
    {
        if(s.size()==1) return s;
        //count the vowels
        for(char c: s)
        {
            auto idx= find(vowels.begin(), vowels.end(), c);
            if(idx!= vowels.end())  // a vowel
            {
                vecfreq[c]++;                
            }
        }
        //print the map
        // for(auto elm: vecfreq)
        // {
        //     cout<<elm.first<<", "<<endl;

        // }
        // replace the vowels
        auto iter= vecfreq.begin();
        for(int i=0;i< s.size() && iter!= vecfreq.end(); i++)
        {
            if(vecfreq.find(s[i])== vecfreq.end()) continue;

            //found a vowel
            // cout<< iter->first<<endl;
            s[i]=iter->first;
            iter->second--;
            if(iter->second==0)iter++;
        }

        return s;
    }
};