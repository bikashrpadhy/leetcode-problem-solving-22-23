class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) 
    {
        // find width and height of the path
        int width = abs(sx-fx);
        int height = abs(sy-fy);

        int min_time = max(height, width);
        if(min_time>t) return false;

        if(width==0 && height==0  && t==1) return false;
        
        return true;
    }

};