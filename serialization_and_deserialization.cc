/**
 * Definition of TreeNode:
 * class TreeNode {
 * public:
 *     int val;
 *     TreeNode *left, *right;
 *     TreeNode(int val) {
 *         this->val = val;
 *         this->left = this->right = NULL;
 *     }
 * }
 */
#include <sstream>
class Solution {
public:
    /**
     * This method will be invoked first, you should design your own algorithm 
     * to serialize a binary tree which denote by a root node to a string which
     * can be easily deserialized by your own "deserialize" method later.
     */
    string serialize(TreeNode *root) {
        // write your code here
        // BFS
        string ret;
        if(root==nullptr) return "#";
        queue<TreeNode*> q;
        q.push(root);
        ret+=to_string(root->val);
        ret+=",";
        while(!q.empty())
        {
            int size = q.size();
            for(int i=0;i<size;++i)
            {
                TreeNode* node = q.front();
                q.pop();
                if(node->left!=nullptr) 
                {
                    ret+=to_string(node->left->val);
                    q.push(node->left);
                } else {
                    ret+="#";
                }
                ret+=",";
                if(node->right!=nullptr) {
                    ret+=to_string(node->right->val);
                    q.push(node->right);
                } else {
                    ret+="#";
                }
                ret+=",";
            }
        }
        return ret.substr(0,ret.size()-1);
    }

    /**
     * This method will be invoked second, the argument data is what exactly
     * you serialized at method "serialize", that means the data is not given by
     * system, it's given by your own serialize method. So the format of data is
     * designed by yourself, and deserialize it here as you serialize it in 
     * "serialize" method.
     */
    TreeNode *deserialize(string data) {
        // write your code here
        queue<string> q;
        istringstream ss(data);
        string str;

        while(getline(ss, str, ',')) {
            q.push(str);
        }
        
        TreeNode *root;
        str = q.front();
        q.pop();
        if(str=="#") return nullptr;
        root = new TreeNode(atoi(str.c_str()));
        queue<TreeNode *> level;
        level.push(root);
        while(!q.empty())
        {
            int size = level.size();
            for(int i=0;i<size;++i)
            {
                TreeNode *node = level.front();
                level.pop();
                str=q.front();
                q.pop();
                if(str=="#") node->left == nullptr;
                else {
                    node->left = new TreeNode(atoi(str.c_str()));
                    level.push(node->left);
                }
                str=q.front();
                q.pop();
                if(str=="#") node->right == nullptr;
                else {
                    node->right = new TreeNode(atoi(str.c_str()));
                    level.push(node->right);
                }
            }
        }
        return root;
    }
};


