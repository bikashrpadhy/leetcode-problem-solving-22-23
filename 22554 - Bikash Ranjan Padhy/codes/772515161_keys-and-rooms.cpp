class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        vector<bool> seen(rooms.size());
        seen[0] = true;
        stack<int> st;
        st.push(0);
        while (!st.empty())
        {
            int node = st.top(); st.pop();
            for (int nei: rooms[node]) // For every key in room # 'node'...
                if (!seen[nei])
                { // ...that hasn't been used yet
                    seen[nei] = true; // mark that we've entered the room
                    st.push(nei); // add the key to the todo list
                }
        }

        for (bool v: seen)  // if any room hasn't been visited, return false
            if (!v) return false;
        return true;
    }

};