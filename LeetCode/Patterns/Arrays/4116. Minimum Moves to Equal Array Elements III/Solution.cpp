class Solution {
public:
    int minMoves(vector<int>& nums) {
        int moves=0 ; int l=nums.size()-1;
       int maxEL = *max_element(nums.begin(), nums.end());
       while(l>=0){
        if(nums[l]<maxEL){
        nums[l] += 1;
        moves +=1;
        }
        if(nums[l]==maxEL) l--;
       }
       return moves;
    }
};
/*class Solution {
public:
    int minMoves(vector<int>& nums) {
        int  n= nums.size();
        int moves =0;
        sort(nums.begin(),nums.end());
         int r= n-1;int l = n-2;
         for(int  i = n-1; i>=1; i--){
            while(nums[l] <nums[r]){
                  nums[l]+=1;
                   moves++;
            }
            if(nums[l]==nums[r]) l--;r--;
            
         }
         return moves;
    }
};*/