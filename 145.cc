/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> postorderTraversal(TreeNode *root) {
        vector<int> ret;
        postorderTraversal(root,ret);
        return ret;
    }
    void postorderTraversal(TreeNode *root, vector<int>& ret)
    {
        if(root==nullptr) return;
        postorderTraversal(root->left,ret);
        postorderTraversal(root->right,ret);
        ret.push_back(root->val);
    }
};
