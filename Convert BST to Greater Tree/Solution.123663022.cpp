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
    int sum=0;
    void postorder(TreeNode* t)
    {
        if (t == NULL) return ;
        postorder(t->right);
        sum=sum+t->val;
        t->val=sum;
        postorder(t->left);
    }
    TreeNode* convertBST(TreeNode* root) {
        postorder(root);
        return root;
    }
};