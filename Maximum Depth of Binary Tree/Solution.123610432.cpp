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
    int calculate_depth(TreeNode* t, int depth)
    {
        if (t->left !=NULL and t->right !=NULL)
        {
            return max(calculate_depth(t->left,depth+1),calculate_depth(t->right,depth+1));
        }
        else if(t->left != NULL && t->right ==NULL )
        {
            return calculate_depth(t->left,depth+1);
        }
        else if(t->right != NULL && t->left ==NULL)
        {
            return calculate_depth(t->right,depth+1);
            
        }
        else return depth;
            
    }
    int maxDepth(TreeNode* root) {
        if (root == NULL)
            return 0;
        return calculate_depth(root,1);
        
    }
    
};