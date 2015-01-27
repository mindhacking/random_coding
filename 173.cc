/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class BSTIterator {
public:
    stack<TreeNode* > node;
    BSTIterator(TreeNode *root) {
        while(root!=nullptr)
        {
            node.push(root);
            root=root->left;
        }
    }

    /** @return whether we have a next smallest number */
    bool hasNext() {
        return !node.empty();   
    }

    /** @return the next smallest number */
    int next() {
        TreeNode* cur = node.top();
        node.pop();
        int ret = cur->val;
        if(cur->right!=nullptr);
        {
            cur=cur->right;
            while(cur!=nullptr)
            {
                node.push(cur);
                cur=cur->left;
            }
        }
        return ret;
    }
};

/**
 * Your BSTIterator will be called like this:
 * BSTIterator i = BSTIterator(root);
 * while (i.hasNext()) cout << i.next();
 */
