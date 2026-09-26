class Solution {
public:
    bool canJump(vector<int>& nums) {
       int MaxIDX=0;
       for(int i=0;i<nums.size()-1;i++) {
        // this condn means what if you  never reached and your i get updated becoz i++ and this is only when 0 is present in arr and ans is false;
        if (i>MaxIDX) return false;
        MaxIDX= max(MaxIDX, i+ nums[i]);
       }
       return true;
    }
};