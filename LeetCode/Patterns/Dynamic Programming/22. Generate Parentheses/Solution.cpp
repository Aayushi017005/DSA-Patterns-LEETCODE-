class Solution {
public:
    vector<string> result;

    void backtrack(string curr, int open, int close, int n) {
        // Base case
        if(curr.length() == 2 * n) {
            result.push_back(curr);
            return;
        }

        // Add '('
        if(open < n) {
            backtrack(curr + "(", open + 1, close, n);
        }

        // Add ')'
        if(close < open) {
            backtrack(curr + ")", open, close + 1, n);
        }
    }

    vector<string> generateParenthesis(int n) {
        backtrack("", 0, 0, n);
        return result;
    }
};