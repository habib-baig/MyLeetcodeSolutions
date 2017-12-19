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
    int findBottomLeftValue(TreeNode* root) {
       
        int lft=0;
        if(!root)  return 0;
        queue<TreeNode *> myq;
        myq.push(root);
        lft=root->val;
        while(!myq.empty())
        {
            TreeNode* t=myq.front();
            myq.pop();
            lft=t->val;
            if(t->right) myq.push(t->right);
            if(t->left) { myq.push(t->left);
                        }
         
        }
        return lft;
    }
};