auto init = []()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    return 0;
}();

class Solution {
public:
     int majorityElement(vector<int>& nums) {
        int c= 0;
        int e = 0;
        for(int i=0;i<nums.size();i++){
            if(c==0){
                e = nums[i];
            }
            if(e==nums[i]){
                c+=1;
            }
            else{
                c-=1;
            }
        }
        return e;
    }
};