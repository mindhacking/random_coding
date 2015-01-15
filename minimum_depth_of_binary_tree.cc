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
    int minDepth(TreeNode *root) {
        if(root==nullptr) return 0;
        int ret = INT_MAX;
        stack<pair<TreeNode*, int>> s;
        s.push(make_pair(root, 1));
        while(!s.empty())
        {
            TreeNode* node =s.top().first;
            int depth = s.top().second;
            s.pop();
            if (node->left == nullptr && node->right == nullptr)
                ret = min(ret, depth);
            if (node->left != nullptr&&ret>depth)
                s.push(make_pair(node->left,depth+1));
            if (node->right != nullptr&&ret>depth)
                s.push(make_pair(node->right,depth+1));
        }
        return ret;
    }
};
