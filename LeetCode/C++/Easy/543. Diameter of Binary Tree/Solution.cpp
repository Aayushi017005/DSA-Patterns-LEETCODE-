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
int ht(TreeNode*root){
    if(root==NULL) return 0;
    int lh = ht(root->left);int rh= ht(root->right);
      return 1+max(lh,rh);

}
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL) return 0;
        int maxi=0;
        //calculate ht from the present node 
     int lh=  ht(root->left);
      int rh= ht(root->right);
      //checks diameterfor every node 
    int ld = diameterOfBinaryTree(root->left);
    int rd = diameterOfBinaryTree(root->right);
    //compare btw the present diameter and prev store diameter 
    return max(lh+rh,max(ld,rd));
    }
};