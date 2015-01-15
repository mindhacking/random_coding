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
    TreeNode *sortedArrayToBST(vector<int> &num) {
        TreeNode *root;
        bst(root,0,num.size()-1,num);  
        return root;
    }
    void bst(TreeNode* root, int begin, int end, vector<int> &num)
    {
        int mid = (begin+end)/2;
        TreeNode* tmp = new TreeNode(nummid));
        root = tmp;
        if (begin == end) return;
        bst(root->left,0,mid-1,num);
        bst(root->right,mid+1,end,num);
    }
};
