class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>>res;
     int n= intervals.size();
        // left portion before adding newInterval
        //insert all intervals before new interval
        // checking the ending points of intervals and strting pt of new intervals if they aren't overlapping add to the res.
        int i ;
        while(i<n && intervals[i][0] < newInterval[0] ){
            res.push_back(intervals[i]);
            i= i+1;
        }
        //  sorting and merge overlapping intervals with new one
        while(i<n && intervals[i][0]<= newIntervals[1]){
            newIntwerval[0] = min(newInterval[0],intervals[i][0]);
            newInterval [1] = max(newIntervals[1], intervals[i][1]);
            i=i+1;
        }
        res.push_back(newInterval);
         // add right portion of arr after new interval 
        while(i<n){
            res.push_back(intervals[i]);
            i=i+1;
        }
     return res;
    }
};