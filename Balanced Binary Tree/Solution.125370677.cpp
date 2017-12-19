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
    int height=0;
    int hieght(TreeNode* root)
        {
    if(root==NULL)
        return 0;
        return max(hieght(root->left),hieght(root->right))+1;
    }
    bool isBalanced(TreeNode* root) {
        int lh=0,rh=0;
        if (root ==NULL)
        {
            return true;
        }
        lh=hieght(root->left);
        rh=hieght(root->right);
        if(abs(lh-rh)<=1) return isBalanced(root->left) && isBalanced(root->right);
        else return false;
    }
};