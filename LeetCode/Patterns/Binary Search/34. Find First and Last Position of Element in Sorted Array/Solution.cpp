class Solution {
public:
int lowerbound(vector<int>&nums,int target){
    int low=0;int high=nums.size()-1;int ans=nums.size();
    while(low<=high){
        int mid=low+(high-low)/2;
        if(nums[mid]>=target){
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return ans;
}
int upperbound(vector<int>&nums,int target){
    int low=0;int high=nums.size()-1;int ans=nums.size();
    while(low<=high){
         int mid=low+(high-low)/2;
        if(nums[mid]> target){
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return ans;
}


    vector<int> searchRange(vector<int>& nums, int target) {
        int first=lowerbound(nums,target);
        int last=upperbound(nums,target)-1;
        if(first==nums.size()||nums[first]!=target){
            return {-1,-1};
        }
        return {first,last};
    }
};