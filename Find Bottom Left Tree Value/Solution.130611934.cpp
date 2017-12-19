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
        queue<TreeNode *> q;
        q.push(root);
        lft=root->val;
        while(!q.empty())
        {
            int z=q.size();
            for(int i=0; i<z; i++){
                TreeNode* t=q.front();
                q.pop();
                if( i == 0) lft=t->val;
                if(t->left) q.push(t->left);
                if(t->right) q.push(t->right);
            }
         
        }
        return lft;
    }
};