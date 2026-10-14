class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return atMost(nums, goal) - atMost(nums, goal - 1);
    }

    int atMost(vector<int>& nums, int goal) {
        if (goal < 0) return 0;

        int l = 0, sum = 0, cnt = 0;

        for (int r = 0; r < nums.size(); r++) {
            sum += nums[r];

            while (sum > goal) {
                sum -= nums[l];
                l++;
            }

            cnt += r - l + 1;
        }

        return cnt;
    }
};
/*class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
         int cnt =0;

        for(int i =0;i<nums.size();i++){
            int sum =0;
            for (int j =i;j<nums.size();j++){
                sum += nums[j];
                if(sum == goal ) cnt++ ; 
            }
        }
        return cnt;
    }
};*/