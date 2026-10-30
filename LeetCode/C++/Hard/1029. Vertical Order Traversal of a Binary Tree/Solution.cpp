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
//map stores col->row->val in sorted order(multiset purpose)
// q stores node,vertical,level
    vector<vector<int>> verticalTraversal(TreeNode* root) {
     map<int,map<int,multiset<int>>>nodes;
       queue<pair<TreeNode*,pair<int,int>>>q;
       q.push({root,{0,0}});
       while(!q.empty()){
       auto p = q.front();
        q.pop();
        TreeNode*node = p.first;
        int col= p.second.first;
        int row= p.second.second;
        
        nodes[col][row].insert(node->val);

        if(node->left){
            q.push({node->left,{col-1,row+1}});
        }
        if(node->right){
            q.push({node->right,{col+1,row+1}});
        }

       }
       vector<vector<int>> ans;
       for(auto p:nodes){
        vector<int>col;
        for(auto q:p.second){
            for(auto val:q.second){
                col.push_back(val);
            }
        }
        ans.push_back(col);
       }
       return ans;
    }
};
// we use map here to keep in a sorted order by value so it it O(logN) and multiset takes takes o(lohg n) by keeping soted order by key
//TC- O(N logN)
// sc - 0(n)= (n)+(n) ->for storing ans and using queue ds