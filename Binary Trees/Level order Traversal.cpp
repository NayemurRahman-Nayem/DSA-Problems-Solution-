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
    void dfs(TreeNode* node , int lev , vector<int> (&Level)[2001]) {
        if(node==NULL) return ; 
        if(node->left) dfs(node->left,lev+1,Level) ; 
        if(node->right) dfs(node->right,lev+1,Level) ; 
        Level[lev].push_back(node->val) ; 
    } 
    vector<vector<int>> levelOrder(TreeNode* root) { 
        vector<int> Level[2001] ;
        dfs(root,0,Level) ; 
        vector<vector<int>> ans ; 
        for(int i=0;i<2001;i++) {
            if(Level[i].size()) {
                ans.push_back(Level[i]) ; 
            }
        }
        return ans ; 
    }
};
