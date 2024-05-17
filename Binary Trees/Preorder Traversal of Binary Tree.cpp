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

    void dfs(TreeNode* root,vector<int>&ans) {
        if(root==NULL) {
            return ; 
        }
        if(root->left==NULL and root->right==NULL) {
            ans.push_back(root->val) ; 
            return ; 
        }
        ans.push_back(root->val) ; 
        if(root->left!=NULL) {
            dfs(root->left,ans) ; 
        }
        if(root->right!=NULL) {
            dfs(root->right,ans) ; 
        }
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>ans ; 
        dfs(root,ans) ;
        return ans ;
    }
};
