class Solution {
public:
    int maxEvents(vector<vector<int>>& events) {

        // Sort according to start day
        sort(events.begin(), events.end());

        // Min-heap: stores end days
        priority_queue<int, vector<int>, greater<int>> pq;

        int count = 0;
        int i = 0;
        int day = 0;

        while(i < events.size() || !pq.empty()) {

            // If no event is currently available,
            // jump to the next event's start day
            if(pq.empty()) {
                day = events[i][0];
            }

            // Add all events that have started
            while(i < events.size() && events[i][0] <= day) {
                pq.push(events[i][1]);
                i++;
            }

            // Remove events whose end day has passed
            while(!pq.empty() && pq.top() < day) {
                pq.pop();
            }

            // Attend the event which ends earliest
            if(!pq.empty()) {
                pq.pop();
                count++;
                day++;
            }
        }

        return count;
    }
};