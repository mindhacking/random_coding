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
    TreeNode *buildTree(vector<int> &inorder, vector<int> &postorder) {
        return buildTree(begin(inorder), end(inorder), begin(postorder), end(postorder));
    }
    template<typename Iterator>
    TreeNode* buildTree(Iterator in_first, Iterator in_last, Iterator post_first, Iterator post_last) {
        if (in_first ==in_last) return nullptr;
        if (post_first == post_last) return nullptr;
        const auto val = *prev(post_last);
        TreeNode* root = new TreeNode(val);
        auto in_root_pos = find(in_first, in_last, val);
        auto left_size = distance(in_first, in_root_pos);
        auto post_left_last = next(post_first, left_size);
        root->left = buildTree(in_first, in_root_pos, post_first, post_left_last);
        root->right = buildTree(next(in_root_pos), in_last, post_left_last,
        prev(post_last));
        return root;
    }
};
