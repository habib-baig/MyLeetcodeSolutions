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
    vector<int> largestValues(TreeNode* root) {
        vector <int> myvec;
        if(!root)  return myvec;
        queue<TreeNode *> q;
        q.push(root);
        while(!q.empty())
        {
            int z=q.size();
            int max=0;
            for(int i=0; i<z; i++){
                TreeNode* t=q.front();
                q.pop();
                if( i == 0 || max<t->val) max=t->val;
                if(t->left) q.push(t->left);
                if(t->right) q.push(t->right);
            }
            myvec.push_back(max);
         
        }
        return myvec;
    }
};