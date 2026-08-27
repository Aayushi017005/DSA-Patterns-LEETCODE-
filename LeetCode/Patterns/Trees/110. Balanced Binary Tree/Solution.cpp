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
int height(TreeNode*root){
    if(!root){
        return 0;
    }
    int lefth=height(root->left);
    int righth=height(root->right);

    return max(lefth,righth)+1;
}
    bool isBalanced(TreeNode* root) {
        if(!root){
            return true;
        }

        int lefth = height(root->left);
        int righth=height(root->right);

        if(abs(lefth-righth)>1){
            return false;
        }
        return isBalanced(root->left) && isBalanced(root->right);
        
    }
};