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
    void flatten(TreeNode* root) {
       if(root == NULL) 
        return ;
        
        stack <TreeNode *> mystack;
        mystack.push(root);
        while(!mystack.empty())
        {
            TreeNode * temp=mystack.top();
            mystack.pop();
            if(temp->right != nullptr){
                mystack.push(temp->right);
            }
            if(temp->left != nullptr){
                mystack.push(temp->left);
            }
            if(!mystack.empty()){
                temp->right=mystack.top();
            }
            
             temp->left=NULL;
            
        }
        
    }
};