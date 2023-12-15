class Solution {
public:
    string largestGoodInteger(string num) {
        string MaxGoodInt="";
        int n=num.length();
        for(int i=0;i<=n-3;++i){
            string substring=num.substr(i,3);
            if(substring[0]==substring[1] && substring[1]==substring[2]){
                MaxGoodInt=max(MaxGoodInt,substring);
            }
        }
        return MaxGoodInt;
    }
};