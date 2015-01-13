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
    bool isValidBST(TreeNode *root) {
        if(!root) return true;
        stack<TreeNode*> s;
        TreeNode* cur = root;
        TreeNode* pre = nullptr;
        while(cur)
        {
            s.push(cur);
            cur=cur->left;
        }
        while(!s.empty())
        {
            cur=s.top();
            s.pop();
            
            if(pre&&pre->val >=cur->val)
                return false;
            pre = cur;
            cur = cur->right;
            while(cur)
            {
                s.push(cur);
                cur = cur->left;
            }
        
        }
        return true;
    }

};
