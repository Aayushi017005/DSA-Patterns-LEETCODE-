class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();

        // Store minimum from i to n-1
        vector<int> suffixMin(n);
        suffixMin[n - 1] = nums[n - 1];

        for (int i = n - 2; i >= 0; i--) {
            suffixMin[i] = min(nums[i], suffixMin[i + 1]);
        }

        // Keep maximum from 0 to i
        int prefixMax = nums[0];

        for (int i = 0; i < n; i++) {
            prefixMax = max(prefixMax, nums[i]);

            int instability = prefixMax - suffixMin[i];

            if (instability <= k) {
                return i;
            }
        }

        return -1;
    }
};
/*If I need information about the array from the beginning up to i, think PREFIX.
If I need information from i to the end, think SUFFIX.
If I need information from both sides of i, think PREFIX + SUFFIX.
If I am repeatedly scanning ranges, ask whether Prefix/Suffix can precompute the information in O(n).*/