class Solution {
public:
        vector<int> findErrorNums(vector<int>& nums) 
    {
        vector<int> res;
//         sort(nums.begin(), nums.end());
        
//         for(int num: nums) cout<<num<<endl;
//         for(int i=0;i< nums.size(); i++)
//         {
//             if(nums[i]==i+1) continue;
            
//             else //if(nums[i]==nums[i+1])
//             {
//                 res.push_back(nums[i]);                
//                 res.push_back(i+1);
//             }
//         }
/////////////////////////////use Hashing///////////////////
        vector<int> freqVector(nums.size()+1, 0);
        for(int num: nums) freqVector[num]++;

        // for(int iter: freqVector) cout<< iter <<" ";
        // cout<<endl;

        for(int i=1; i<freqVector.size(); i++)
        {
            if(freqVector[i]==1) continue;
            else res.push_back(i);
        }
            
        if(freqVector[res[0]]==0)
        {//if res[0] is the missing one, swap res[0] and res[1]
            int t=res[0];
            res[0]=res[1];
            res[1]=t;
        }
        return res;
        
    }
};
