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
    
private:
    int dfs(TreeNode* root,int mn,int mx){
        if(root==NULL)
            return abs(mx-mn);
        mx = max(mx,root->val);
        mn = min(mn,root->val);
        return max(dfs(root->left,mn,mx), dfs(root->right,mn,mx));
    }
public:
    int maxAncestorDiff(TreeNode* root) {
        return dfs(root,root->val,root->val);
    }
};
