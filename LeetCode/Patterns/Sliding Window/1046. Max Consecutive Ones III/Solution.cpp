class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l = 0, r = 0, maxlen = 0, zeroes = 0;

        while (r < nums.size()) {
            if (nums[r] == 0) zeroes++;

            if (zeroes > k) {
                if (nums[l] == 0) zeroes--;
                l++;
            }

            if (zeroes <= k) {
                maxlen = max(maxlen, r - l + 1);
            }

            r++;
        }

        return maxlen;
    }
};

/*
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l =0; int r=0; int maxlen=0; int len=0; int zeroes =0;

        while(r<nums.size()){

            if (nums[r]==0) zeroes++;
            
            if(zeroes>k){
             if  (nums[l]==0){
                zeroes--; 
                l++;
             }
            }
            if(zeroes<=k){
                len=r-l+1;
                maxlen = max(maxlen, len);
            }
            r++;
        }
        return maxlen;
    }
};*/