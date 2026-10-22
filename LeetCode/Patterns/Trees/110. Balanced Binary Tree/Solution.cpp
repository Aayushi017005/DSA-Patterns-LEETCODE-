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
    if(root==NULL ) return 0;
    int lh = ht(root->left);
    if(lh==-1) return -1;
    int rh= ht(root->right);
    if(rh==-1) return -1;
    if(abs(lh-rh)>1) return -1;

    return 1+max(lh,rh);
} 
    bool isBalanced(TreeNode* root) {
        if(ht(root) !=-1) return true;
        else false;
        
    }
};

/*class Solution {
public:
      int hieght(TreeNode* root){
     if(root == NULL) return 0;
     int lh= hieght(root->left);
     int rh= hieght(root->right);
     return 1 +max(lh,rh);
      }
    bool isBalanced(TreeNode* root) {
        if(root==NULL) return true ;
          int lh= hieght(root->left) ;
          int rh = hieght(root->right);
     if(abs(lh-rh)>1) return false;
    
     return isBalanced(root->left) && isBalanced(root->right);
    }
};//tn -o(n^2) */

