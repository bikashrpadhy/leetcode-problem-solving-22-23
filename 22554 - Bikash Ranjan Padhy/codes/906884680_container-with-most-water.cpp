class Solution {
public:
    int maxArea(vector<int>& height) 
    {
        int water_vol=0, w=0;
        for(int i=0, j=height.size()-1; i< j ; )
        {
            w= min(height[i], height[j]);
            water_vol= max(water_vol, w* (j-i)) ;
            if(height[i]>height[j]) j--;
            else i++;            
        }
        return water_vol;
        
    }
};