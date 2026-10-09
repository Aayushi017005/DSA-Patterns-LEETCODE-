class Solution {
public:
    bool isGood(vector<int>& nums) {
        int n = nums.size() - 1;

        if (n <= 0) return false;

        int freq[201] = {0};

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > n) return false;
            freq[nums[i]]++;
        }

        for (int i = 1; i < n; i++) {
            if (freq[i] != 1) return false;
        }

        return freq[n] == 2;
    }
};