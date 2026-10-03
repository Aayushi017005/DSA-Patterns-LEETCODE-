class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        
        // a and b in comparator is a row not a vector so we can't access[0][1].
        sort(intervals.begin(),intervals.end(),[](auto &a , auto &b){
            // both are rows and we want its end so thats why accessd in this way;
            return a[1]< b[1];
        });
        int cnt=1 ; int LastendTime=intervals[0][1]; int n = intervals.size();
        for(int i =1; i<n;i++){

            if(intervals[i][0]>= LastendTime){
                cnt++;
                LastendTime = intervals[i][1];
            }
        }
        return n - cnt;
    }
};