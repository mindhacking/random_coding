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
    bool isSymmetric(TreeNode *root) {
        if (root == nullptr) return true;
        return isSym(root->left,root->right);
    }
    bool isSym(TreeNode* lroot, TreeNode* rroot)
    {
        if (lroot == nullptr && rroot == nullptr) return true;
        if (lroot == nullptr || rroot == nullptr || lroot->val != rroot->val) return false; 
        return isSym(lroot->left, rroot->right) && isSym(lroot->right, rroot->left);
    }
};
