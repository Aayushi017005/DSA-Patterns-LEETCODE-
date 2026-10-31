/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
 //recursive sol - tc - o(N) and s(n)-o(h)
 class Solution {
public:
    vector<int> LRview(TreeNode* node, int level, vector<int>& ans) {
        if (node == NULL) return ans;

        if (level == ans.size()) {
            ans.push_back(node->val);
        }

        LRview(node->right, level + 1, ans);
        LRview(node->left, level + 1, ans);

        return ans;
    }

    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        return LRview(root, 0, ans);
    }
};
/* class Solution {
public:
    void LRview(TreeNode* node, int level, vector<int>& ans) {
        if (node == NULL) return;

        if (level == ans.size()) {
            ans.push_back(node->val);
        }

        LRview(node->right, level + 1, ans);
        LRview(node->left, level + 1, ans);
    }

    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        LRview(root, 0, ans);
        return ans;
    }
};*/