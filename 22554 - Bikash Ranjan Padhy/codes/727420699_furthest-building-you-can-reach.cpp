class Solution {
public:
       int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        
        
        priority_queue<int> maxB;
    
        int i=0, diff =0; // i is used for storing the position and diff for storing difference.
        for(i=0; i<heights.size()-1; i++){ // go till before the last building.
            
        
            diff = heights[i+1]-heights[i];
            
        
            if(diff <= 0){
                continue;
            }

            bricks -= diff;
            maxB.push(diff); 
            
            // if bricks become negetive then there were not enough bricks. So add a ladder in place of the step where most bricks were used.
            if(bricks < 0){
                bricks += maxB.top(); //taking back bricks from that step
                maxB.pop(); //As max bricks were removed so pop
                ladders--; //1 ladder used
            }

            //if ladder is negetive then the ladder was not provided to go to next building. So we can't proceed.
            if(ladders < 0) break;
        }
        
        
        return i;
    }
};