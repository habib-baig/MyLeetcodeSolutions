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
    
    bool isSymmetricUtil(TreeNode* n1, TreeNode* n2)
    {
        if(n1==NULL && n2==NULL)
        {
            return true;
        }
        if(n1==NULL || n2==NULL)
        {
            return false;
        }
        if(n1->val==n2->val)
        {
        return isSymmetricUtil(n1->left,n2->right) && isSymmetricUtil(n1->right,n2->left);
        }
        else return false;
    }
    bool isSymmetric(TreeNode* root) {
        if (root==NULL) return true;
        return isSymmetricUtil(root->left,root->right);
    }
};