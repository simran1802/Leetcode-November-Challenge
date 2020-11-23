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
    int helper(TreeNode *root,int &left,int &right){
        if(!root)
            return 0;
        int ll=0,lr=0,rr=0,rl=0;
        left = helper(root->left,ll,lr);
        right = helper(root->right,rl,rr);
        return max(left+right,root->val+ll+lr+rr+rl);
    }
    int rob(TreeNode* root) {
        int l,r;
        return helper(root,l,r);
    }
};
