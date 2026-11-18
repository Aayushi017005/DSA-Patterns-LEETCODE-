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
    int widthOfBinaryTree(TreeNode* root) {
        if(!root) 
        return 0;
        int ans =0;
        queue<pair<TreeNode*,int>>q;
        q.push({root,0});
        while(!q.empty()){
            int size=q.size();
            long long min = q.front().second;
            int first;int last;
            for(int i =0;i<size;i++){
                long long curr_id= q.front().second-min;
                TreeNode*node=q.front().first;
                q.pop();
            if(i==0) first = curr_id;
            if(i==size-1) last=curr_id;

            if(node->left){
                q.push({node->left,curr_id*2+1});
            }
            if(node->right){
                q.push({node->right,curr_id*2+2});
            }
            }
            ans= max(ans,last-first+1);
        }
          return ans;
    }
};
// BFS + indexing (level-order traversal)
/*1. BFS: We use a queue to process nodes level by level.
2. Indexing: We assign a hypothetical position/index to every node to calculate the width of that level.*/