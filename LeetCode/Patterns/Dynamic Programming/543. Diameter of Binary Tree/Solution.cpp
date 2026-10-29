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
    int diameterOfBinaryTree(TreeNode* root) {
        if (!root) return 0;

        stack<TreeNode*> st;
        st.push(root);
        int maxDiameter = 0;

        while (!st.empty()) {
            TreeNode* node = st.top();
            st.pop();

            if (!node) continue;

            int lh = height(node->left);
            int rh = height(node->right);

            maxDiameter = max(maxDiameter, lh + rh);

            if (node->left) st.push(node->left);
            if (node->right) st.push(node->right);
        }

        return maxDiameter;
    }

    int height(TreeNode* root) {
        if (!root) return 0;
        return 1 + max(height(root->left), height(root->right));
    }
};
/*class Solution {
public:
    int maxi = 0;

    int height(TreeNode* root) {
        if (root == NULL) return 0;

        int lh = height(root->left);
        int rh = height(root->right);

        maxi = max(maxi, lh + rh);

        return 1 + max(lh, rh);
    }

    int diameterOfBinaryTree(TreeNode* root) {
        height(root);
        return maxi;
    }
};
*/
/*class Solution {
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
};*/