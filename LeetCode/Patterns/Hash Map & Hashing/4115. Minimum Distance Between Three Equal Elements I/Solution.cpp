class Solution {
public:
    int minimumDistance(vector<int>& nums) {

        int ans = INT_MAX;

        // Store indices of every number
        vector<vector<int>> pos(nums.size() + 1);

        for(int i = 0; i < nums.size(); i++) {
            pos[nums[i]].push_back(i);
        }

        // For every number
        for(int x = 1; x <= nums.size(); x++) {

            // Need at least 3 occurrences
            if(pos[x].size() < 3)
                continue;

            // Check every 3 consecutive occurrences
            for(int i = 0; i + 2 < pos[x].size(); i++) {

                int first = pos[x][i];
                int third = pos[x][i + 2];

                int distance = 2 * (third - first);

                ans = min(ans, distance);
            }
        }

        if(ans == INT_MAX)
            return -1;

        return ans;
    }
};