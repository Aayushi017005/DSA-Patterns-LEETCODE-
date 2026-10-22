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
class Solution {
public:
    bool isBalanced(TreeNode* root) {
        int lh = isBalanced(root->left);
        int rh = isBalanced(root->right);
        int left = 1+max(lh);
        int right = 1+max(rh);
        if(left-right) > 1) return false;
        if(root ==NULL) return true;

        return true;
    }
};