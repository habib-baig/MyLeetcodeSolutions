/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> vec;
    void inorderTraversalUtil(TreeNode * t)
    {
        if(t==NULL)
            return;
        inorderTraversalUtil(t->left);
        vec.push_back(t->val);
        inorderTraversalUtil(t->right);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        inorderTraversalUtil(root);
        return vec;
    }
};