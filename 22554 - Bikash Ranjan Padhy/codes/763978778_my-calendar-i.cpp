class MyCalendar {
private:
    set<pair<int,int>> s; //sorted based on first value of pair
public:
    MyCalendar() {
        
    }
    bool liesBetween(int lo, int hi, int val) {
        return lo < val && hi > val;
    }
    bool book(int start, int end) {
        end--;
        auto it = s.upper_bound({start, end});
        int nextStart = (it == s.end()) ? INT_MAX : it->first;
        int prevEnd = (it == s.begin()) ? INT_MIN : (--it)->second;
        if(liesBetween(prevEnd, nextStart, start) && liesBetween(prevEnd, nextStart, end) ) {
            s.insert({start, end});
            return true;
        }
        return false;
    }
};


/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */