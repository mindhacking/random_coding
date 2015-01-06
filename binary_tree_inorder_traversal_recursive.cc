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
    vector<int> inorderTraversal(TreeNode *root) {
        vector<int> ret;
        bst(root,ret);
        return ret;
    }
    void bst(TreeNode* root, vector<int>& ret)
    {
        if (!root) return;
        bst(root->left,ret);
        ret.push_back(root->val);
        bst(root->right,ret);
        return;
    }
};
