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
    vector<vector<int> > pathSum(TreeNode *root, int sum) {
        vector<vector<int>> ret;
        vector<int> path;
        pathRec(ret, path, root, sum);
        return ret;
    }
    void pathRec(vector<vector<int>> &ret, vector<int> path, TreeNode *root, int sum)
    {
        
        if (root == nullptr) return;
        if (sum == root->val && root->left == nullptr && root->right ==nullptr) 
        {
            path.push_back(root->val);
            ret.push_back(path);
            return;
        }
        path.push_back(root->val);
        pathRec(ret,path,root->left,sum-root->val);
        pathRec(ret,path,root->right,sum-root->val);
    }
};
