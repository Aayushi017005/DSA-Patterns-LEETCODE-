class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        return atMost(nums, k) - atMost(nums, k - 1);
    }

    int atMost(vector<int>& nums, int k) {
        int l = 0, cnt = 0, odd = 0;

        for (int r = 0; r < nums.size(); r++) {
            if (nums[r] % 2 != 0) odd++;

            while (odd > k) {
                if (nums[l] % 2 != 0) odd--;
                l++;
            }

            cnt += r - l + 1;
        }

        return cnt;
    }
};
/*class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
       int subarr=0;
       for(int i=0;i<nums.size();i++){
        int cnt =0;
      for (int j=i; j<nums.size();j++){
        int n = nums[j]%2;
        if (n !=0) cnt ++;
        if(cnt == k) {
          subarr++; 
        }
      }
       }
       return subarr;
    }
};*/