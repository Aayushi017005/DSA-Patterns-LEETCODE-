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

// Iterative approach using stack to avoid recursion depth issues
stack<pair<TreeNode*, int>> st;
st.push({root, 0});
int maxDiameter = 0;

while (!st.empty()) {
auto [node, depth] = st.top();
st.pop();

if (!node) continue;

// Calculate height of left and right subtrees iteratively or recursively
// For simplicity, this alternative shows a different structure but same logic
int lh = 0, rh = 0;
if (node->left) lh = height(node->left);
if (node->right) rh = height(node->right);

maxDiameter = max(maxDiameter, lh + rh);
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