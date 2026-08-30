class Solution {
public:
    int minimumDistance(vector<int>& nums) {

        int ans = INT_MAX;

        // last[a]  = most recent index of a
        // second[a] = second most recent index of a
        vector<int> last(nums.size() + 1, -1);
        vector<int> second(nums.size() + 1, -1);

        for(int i = 0; i < nums.size(); i++) {

            int x = nums[i];

            // If we already have two occurrences
            if(second[x] != -1) {

                // second[x], last[x], i
                int distance = 2 * (i - second[x]);

                ans = min(ans, distance);
            }

            // Shift positions
            second[x] = last[x];
            last[x] = i;
        }

        return ans == INT_MAX ? -1 : ans;
    }
};