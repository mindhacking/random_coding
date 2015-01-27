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
    void flatten(TreeNode *root) {
        TreeNode *pre = root;
        while(root)
        {
            if(root->left){
                pre=root->left;
                while(pre->right) pre=pre->right;
                pre->right=root->right;
                root->right=root->left;
                root->left=nullptr;
            }
            root=root->right;
        }
    }
};
