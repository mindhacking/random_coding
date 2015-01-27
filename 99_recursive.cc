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
    void recoverTree(TreeNode *root) {
            vector<TreeNode*> node;
            vector<int> val;
            inorder_traversal(root,node,val);
            sort(val.begin(),val.end());
            for(int i=0;i<node.size();++i) node[i]->val = val[i];        
    }
    void inorder_traversal(TreeNode *root, vector<TreeNode*>& node, vector<int>& val)
    {
        if(root == nullptr) return;
        inorder_traversal(root->left,node,val);
        node.push_back(root);
        val.push_back(root->val);
        inorder_traversal(root->right,node,val);
    }
};
