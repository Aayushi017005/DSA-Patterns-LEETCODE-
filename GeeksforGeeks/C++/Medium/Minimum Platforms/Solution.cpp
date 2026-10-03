class Solution {
  public:
    int minPlatform(vector<int>& arr, vector<int>& dep) {
        // code here
         sort(arr.begin(),arr.end());
         sort(dep.begin(), dep.end());
         
         int cnt =0 ; int maxcnt=0;
         int i =0 ; int j=0;
         while(i<arr.size()){
             
             if(arr[i] <= dep[j]){
                 cnt = cnt+1;
                 i=i+1;
             }
             else{
                 cnt= cnt-1;
                 j=j+1;
             }
             maxcnt = max(maxcnt , cnt);
         }
         return maxcnt;
    }
};
