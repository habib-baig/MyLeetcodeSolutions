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
    int calculate_depth(TreeNode* t)
    {
        if(t==NULL)
        {return 0;}
        else
            return max(1+calculate_depth(t->left),1+calculate_depth(t->right));
    }
    int maxDepth(TreeNode* root) {
        if (root == NULL)
            return 0;
        return calculate_depth(root);
        
    }
    
};