class Solution {
public: // slope concept 
    int candy(vector<int>& ratings) {
        int n = ratings.size();
        int sum = 1; int i = 1; int peak = 0;

        while(i<n){
     // if slope is linear or coressponding points or ratings
        if (ratings[i]==ratings[i-1]){
         sum = sum + 1; i++; continue; // this continue statement means if two el equal sum + by 1 and move to 3rd element
        }
          peak=1;
         // increasing slope 
         while(i<n && ratings[i-1] < ratings[i]){
            peak = peak+1;
            sum = sum + peak; 
            i++;
         }
         // decreasing slope 
          int down = 1;
         while(i<n && ratings[i-1] > ratings[i]){
            sum= sum +down;
            down = down +1;
            i++;
         } 
         if(down > peak) {
            sum = sum + (down - peak)
         }
        }
        return sum;
    }
};

/*class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size();
        int left[n]; left[0]=1; 
        int sum =0; int sum2=0;
   //considering left side 
        for(int i=1;i<n; i++ ){

            if(ratings[i-1]< ratings[i]) {
                left[i] = left[i-1]+1;
            }
            else{
                left[i]=1;
            }
        }
        //right side
        int right= 1;
        int ans = left[n-1];
          for(int i = n-2;i>=0;i--){
            if(ratings[i+1]<ratings[i]){
                right = right +1 ;
            }
            else{
             right=1;
            }
           // You need to compare the old left value with the newly calculated right value for each index and at max which can satisfy both left and right
           ans= ans + max(left[i], right);
          }
          return ans;
    }
};*/