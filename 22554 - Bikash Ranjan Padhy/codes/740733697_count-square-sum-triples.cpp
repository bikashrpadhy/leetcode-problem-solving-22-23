class Solution {
public:
    int countTriples(int n) {
        int result = 0;

        for(int a = 1; a <= n - 2; ++a){
            for(int b = a + 1; b <= n - 1; ++b){
                for(int c = b + 1; c <= n; ++c){
                    if(pow(a, 2) + pow(b,2) == pow(c, 2))
                        result += 2;
                }
            }
        }

        return result; 
    }
};