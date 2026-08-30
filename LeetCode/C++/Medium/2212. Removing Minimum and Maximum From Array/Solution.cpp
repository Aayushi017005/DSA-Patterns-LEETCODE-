class Solution {
public:
    int minimumDeletions(vector<int>& nums) {

        int n = nums.size();

        int minIndex = 0;
        int maxIndex = 0;

        // Find min and max indices
        for(int i = 0; i < n; i++) {

            if(nums[i] < nums[minIndex])
                minIndex = i;

            if(nums[i] > nums[maxIndex])
                maxIndex = i;
        }

        // Make minIndex the left index
        if(minIndex > maxIndex)
            swap(minIndex, maxIndex);

        // 1. Both from front
        int front = maxIndex + 1;

        // 2. Both from back
        int back = n - minIndex;

        // 3. Min from front, max from back
        int both = (minIndex + 1) + (n - maxIndex);

        return min({front, back, both});
    }
};