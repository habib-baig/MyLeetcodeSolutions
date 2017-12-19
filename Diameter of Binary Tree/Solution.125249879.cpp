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
    int hieght(TreeNode* t)
    {
        if (t==NULL) return 0;
        else return(max(hieght(t->left),hieght(t->right))+1);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int lh=0,rh=0,curh=0;
        if(root==NULL) return 0;
        lh=hieght(root->left);
        rh=hieght(root->right);
        return max(lh+rh, max(diameterOfBinaryTree (root->left) , diameterOfBinaryTree (root->right) ));
    }
};