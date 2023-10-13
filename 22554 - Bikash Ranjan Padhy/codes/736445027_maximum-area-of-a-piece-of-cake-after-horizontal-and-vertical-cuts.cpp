class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts){
        int max_hor_dist=0, max_vert_dist=0;
        
        horizontalCuts.push_back(h);        
        horizontalCuts.push_back(0);
        
            sort(horizontalCuts.begin(), horizontalCuts.end());
            for(int i=0; i+1 < horizontalCuts.size(); i++)
            {                
              //  max_hor_dist= max(abs(horizontalCuts[i] - horizontalCuts[i+1]), max_hor_dist);
         
                max_hor_dist= max_hor_dist > abs(horizontalCuts[i] - horizontalCuts[i+1])? max_hor_dist : abs(horizontalCuts[i] - horizontalCuts[i+1]);
                
            }
        
        
        
        cout<< "max_hor_dist is: "<<  max_hor_dist<< endl;
        
        verticalCuts.push_back(w);
        verticalCuts.push_back(0);
        
            sort(verticalCuts.begin(), verticalCuts.end());
            for(int i=0; i+1 < verticalCuts.size(); i++)
            {
                //max_vert_dist= max(abs(verticalCuts[i] - verticalCuts[i+1]), max_vert_dist);
                max_vert_dist= max_vert_dist > abs(verticalCuts[i] - verticalCuts[i+1])? max_vert_dist : abs(verticalCuts[i] - verticalCuts[i+1]);
            }
        
        
        cout<< "max_vert_dist is: "<<  max_vert_dist<< endl;
        
        return ((long)max_hor_dist* max_vert_dist) % (int)(1000000000 + 7);
    }
};