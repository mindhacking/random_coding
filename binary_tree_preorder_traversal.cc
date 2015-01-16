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
    void traverse(vector<int>& res, TreeNode* root)
    {
        if (root == nullptr) return;
        res.push_back(root->val);
        traverse(res,root->left);
        traverse(res,root->right);
    }
    vector<int> preorderTraversal(TreeNode *root) {
        vector<int> res;
        traverse(res,root);
        return res;
    }
};
