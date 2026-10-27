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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        queue<TreeNode*>q;
        vector<vector<int>>res;
        int flag=0;
             q.push(root);
        if(root==NULL) return res;
      
        while(!q.empty()){
            int s= q.size(); vector<int>lvl;
            for(int i=0;i<s;i++){
         TreeNode*top= q.front();
         q.pop();
           if(top->left!=NULL) q.push(top->left);
           if(top->right!=NULL)q.push(top->right);
           lvl.push_back(top->val);
            }
           if(flag==0) {
            flag=1;
           }
           else{
            reverse(lvl.begin(),lvl.end());
            flag=0;
           }
            res.push_back(lvl);
        }
        return res;

    }
};