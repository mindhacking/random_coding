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
    vector<vector<int> > levelOrder(TreeNode *root) {
        vector<vector<int>> ret;
        LOT(ret, root, 1);
        return ret;
    }
    void LOT(vector<vector<int>> &ret, TreeNode *root, int height)
    {
        if (root == nullptr) return;
        if (height > ret.size()) ret.resize(height);
        ret[height-1].push_back(root->val);
        LOT(ret, root->left, height+1);
        LOT(ret, root->right, height+1);
    }
};
