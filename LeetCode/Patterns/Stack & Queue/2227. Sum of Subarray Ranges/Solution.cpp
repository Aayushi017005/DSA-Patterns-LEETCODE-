class Solution {
public:
vector<int>findNSE(vector<int>&nums){
    int n= nums.size();
    vector<int>res(n);
    stack<int>st;
    for(int i=n-1;i>=0;i--){
        while(!st.empty()&& nums[st.top()]>=nums[i]){
            st.pop();
        }
        if(st.empty()){
          res[i]= n;
        }
        else{
            res[i]= st.top();
        }
        st.push(i);
    }
    return res;
}

  vector<int>findPSEE(vector<int>&nums){
    int n=nums.size();
       stack<int>st;
       vector<int>res(n);
       for(int i=0;i<=n-1;i++){
        while(!st.empty()&& nums[st.top()]>nums[i]){
            st.pop();
        }
        if(st.empty()) {
            res[i] = -1; 
        }
        else{
            res[i] = st.top();
        }
              st.push(i);
       }
       return res;
  }
 long long SubarrayMin(vector<int>&nums){
    int n=nums.size(); 
    long long sum=0;
  
    vector<int>nse=findNSE(nums);
    vector<int>psee=findPSEE(nums);
    for(int i =0 ;i<=n-1;i++){
        long long left= i-psee[i];
        long long right = nse[i]-i;
        sum= (sum+(left*right*nums[i]*1LL));
    }
  return sum;
 }
  vector<int>findNGE(vector<int>&nums){
    int n= nums.size();
    stack<int>st;
    vector<int>res(n);
    for(int i=n-1;i>=0;i--){
        while(!st.empty()&& nums[st.top()]<=nums[i]){
            st.pop();
        }
        if(st.empty()){
            res[i]=n;
        }
        else {
            res[i]=st.top();
        }
        st.push(i);
    }
    return res;
  }
     vector<int>findPGEE(vector<int>&nums){
        int n= nums.size();
        stack<int>st;
        vector<int>res(n);
        for(int i =0; i<=n-1;i++){
            while(!st.empty() && nums[st.top()]<nums[i]){
                st.pop();
            }
            if(st.empty()){
             res[i]=-1;
             }
             else {
                res[i]=st.top();
             }
             st.push(i);
            }
           return res;
     }

 long long SubarrayMax(vector<int>&nums){
     int n= nums.size();
     long long sum=0;
    
     vector<int>nge=findNGE(nums);
     vector<int>pgee = findPGEE(nums);
     for(int i=0;i<=n-1;i++){
        long long left= i-pgee[i];
        long long right = nge[i] -i;
        sum=(sum+(left*right*nums[i]));
     }
    return sum ;
 }
    long long subArrayRanges(vector<int>& nums) {
        return (SubarrayMax(nums)-SubarrayMin(nums));
        
    }
};