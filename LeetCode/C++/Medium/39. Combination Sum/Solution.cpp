class Solution {
public:
    vector<vector<int>> ans;
    vector<int> path;

    void backtrack(int index, vector<int>& candidates, int target) {

        if (target == 0) {
            ans.push_back(path);
            return;
        }

        if (index == candidates.size() || target < 0) {
            return;
        }

        // Take current candidate
        path.push_back(candidates[index]);
        backtrack(index, candidates, target - candidates[index]);
        path.pop_back();

        // Skip current candidate
        backtrack(index + 1, candidates, target);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {

        backtrack(0, candidates, target);
        return ans;
    }
};