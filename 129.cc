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
    int sumNumbers(TreeNode *root) {
        vector<int> ret;
        int cur=0;
        sumNumbers(root,cur,ret);
        int results=0;
        for(int i=0;i<ret.size();++i)
            results+=ret[i];
        return results;
    }
    void sumNumbers(TreeNode* root, int cur, vector<int>& ret)
    {
        if(root==nullptr) return;
        if(root->left==nullptr&&root->right==nullptr)
        {
            cur*=10;
            cur+=root->val;
            ret.push_back(cur);
            return;
        }
        cur*=10;
        cur+=root->val;
        sumNumbers(root->left,cur,ret);
        sumNumbers(root->right,cur,ret);
    }
};
