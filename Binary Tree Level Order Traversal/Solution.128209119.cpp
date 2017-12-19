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
    vector<vector<int>> levelOrder(TreeNode* root) {
    vector<vector<int>> myvec;
        if(root==NULL) return myvec;
    queue<TreeNode *> q;
    q.push(root);
    vector<int> newvec={root->val}; 
    myvec.push_back(newvec);
    
    while(!q.empty())
    {
        queue<TreeNode *> nq;
        vector<int> newvec;
        while(!q.empty())
        {
            TreeNode * temp;
            temp=q.front();
            q.pop();
            if (temp->left){ nq.push(temp->left); newvec.push_back(temp->left->val);}
            if (temp->right) {
                nq.push(temp->right);
                 newvec.push_back(temp->right->val);  
                }  
            }
        if(newvec.size()) myvec.push_back(newvec);
        q=nq;
    }
   return myvec;     
}
};