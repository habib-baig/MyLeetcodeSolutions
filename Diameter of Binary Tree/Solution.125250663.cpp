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
    map<TreeNode*,int> mymap;
    int hieght(TreeNode* t)
    {
        if (t==NULL) return 0;
        else return(max(hieght(t->left),hieght(t->right))+1);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int lh=0,rh=0,curh=0;
        if(root==NULL) return 0;
        if(mymap.count(root->left)==0)
        {
            mymap[root->left]=hieght(root->left);
        }
        lh=mymap[root->left];
        if(mymap.count(root->right)==0)
        {
            mymap[root->right]=hieght(root->right);
        }
        rh=mymap[root->right];
        return max(lh+rh, max(diameterOfBinaryTree (root->left) , diameterOfBinaryTree (root->right) ));
    }
};